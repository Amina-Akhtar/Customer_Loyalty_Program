#pragma once
#include<Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;

public ref class Menus
{
private:
	int itemcost;
	int itemqty;
	int itempnt;
	static int sales;
public:
	String^ itemname;
	//constructors
	Menus()
	{
		itemcost = 0, itempnt = 0, itemqty = 0, sales = 0;
		itemname = " ";
	}
	Menus(String^ n, int c, int q, int p, int s)
	{
		itemname = n;
		itemcost = c;
		itemqty = q;
		itempnt = p;
		sales = s;
	}
	//setters and ggetters
	void setname(String^ n)
	{
		itemname = n;
	}
	void setcost(int c)
	{
		itemcost = c;
	}
	void setpoints(int p)
	{
		itempnt = p;
	}
	void setqty(int q)
	{
		itemqty -= q;
	}
	void setsales(int s)
	{
		sales += s;
	}
	String^ getname()
	{
		return itemname;
	}
	int getcost()
	{
		return itemcost;
	}
	int getqty()
	{
		return itemqty;
	}
	int getpoints()
	{
		return itempnt;
	}
	int getsales()
	{
		return sales;
	}
	//data in menu file s stored in the format
	//name,cost,quantity,points,sales
	//name1,cost1,quantity1,points1,sales1...
	array<array <String^>^>^ loadmenu(int& count)
	{
		StreamReader^ read = gcnew StreamReader("Menu.txt");
		while (read->Peek()>=1)
		{
			String^ n = read->ReadLine();
			if (n == "")
			{
				break;
			}
			int c = Convert::ToInt32(read->ReadLine());
			int q = Convert::ToInt32(read->ReadLine());
			int p = Convert::ToInt32(read->ReadLine());
			int s = Convert::ToInt32(read->ReadLine());
			count++;
		}
		read->Close();
		array<array <String^>^>^ menu_data = gcnew array<array<String^>^>(count);
		for (int i = 0; i < count; i++)
		{
			menu_data[i] = gcnew array<String^>(5);
		}
		//StreamWriter^ write = gcnew StreamWriter("Menu.txt");
		StreamReader^ write = gcnew StreamReader("Menu.txt");
		for (int i = 0; i < count; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				menu_data[i][j] = write->ReadLine();
			}
		}

		write->Close();
		return menu_data;
	}
};
public ref class User_menu :public Menus
{
public:
	User_menu(String^ n)
	{
		itemname = n;
	}
	User_menu(String^ n, int c, int q, int p, int s) :Menus(n, c, q, p, s)
	{

	}
	void Addtocart(String^ name, int cindex, array<Menus^>^ cart)
	{
		int count = 0, choice = 0;
		array<array <String^>^>^ information = loadmenu(count);

		cart[cindex] = gcnew User_menu(name);
		if (cindex < 10)
		{
			for (int i = 0; i < cindex; i++)
			{
				if (cart[i]->getname() == name)
				{
					cart[i]->setqty(1);
					cart[i]->setsales(1);
					MessageBox::Show("Item added to the cart!!\n");
					choice++;
					break;
				}
			}
			for (int i = 0; i < count && choice == 0; i++)
			{
				if (information[i][0] == name)
				{
				
					cart[cindex]->setname(name);
					cart[cindex]->setcost(Convert::ToInt32(information[i][1]));
					information[i][2] = Convert::ToString(Convert::ToInt32(information[i][2]) - 1);
					cart[cindex]->setqty(1);
					cart[cindex]->setpoints(Convert::ToInt32(information[i][3]));
					information[i][4] = Convert::ToString(Convert::ToInt32(information[i][4]) + 1);
					cart[cindex]->setsales(1);
					MessageBox::Show("Item added to the cart!!\n");

					StreamWriter^ write = gcnew StreamWriter("Cart.txt", true);
					write->WriteLine(cart[cindex]->getname());
					write->WriteLine(cart[cindex]->getcost());
					write->WriteLine(cart[cindex]->getqty());
					write->WriteLine(cart[cindex]->getpoints());
					write->Close();
					//cindex++;
				}
			}
			//count=0;
			StreamWriter^ write = gcnew StreamWriter("Menu.txt");
			for (int i = 0; i < count; i++)
			{
				write->WriteLine(information[i][0]);
				write->WriteLine(information[i][1]);
				write->WriteLine(information[i][2]);
				write->WriteLine(information[i][3]);
				write->WriteLine(information[i][4]);
			}
			write->Close();
			//MessageBox::Show("Account created successfully!");
		}
		else
		{
			MessageBox::Show("Cart is full!!\n");
		}
	}
	void Addtowishlist(String^ name, int windex, array<Menus^>^ wishlist)
	{
		int count = 0;
		array<array <String^>^>^ information = loadmenu(count);

		wishlist[windex] = gcnew User_menu(name);
		if (windex < 10)
		{
			for (int i = 0; i < count; i++)
			{
				if (information[i][0] == name)
				{
					wishlist[windex]->setname(information[i][0]);
					wishlist[windex]->setcost(Convert::ToInt32(information[i][1]));
					wishlist[windex]->setqty(Convert::ToInt32(information[i][2]));
					wishlist[windex]->setpoints(Convert::ToInt32(information[i][3]));
					wishlist[windex]->setsales(1);
					MessageBox::Show("Item added to the wishlist!\n");
					StreamWriter^ write = gcnew StreamWriter("Wishlist.txt",true);
					write->WriteLine(name);
					write->Close();
				}
			}
		}
		else
		{
			MessageBox::Show("Wishlist is overflowing:(\n");
		}
	}
	void viewcart(int cindex, array<Menus^>^ cart)
	{
		for (int i = 0; i < cindex; i++)
		{
			MessageBox::Show(i + 1 + ". Name:" + cart[i]->getname() + " Cost:" + cart[i]->getcost() + " Quantity:" + getsales() + "Points:" + getpoints());
		}
	}
	void checkout(int cindex, array<Menus^>^ cart)
	{
		int bill = 0;
		for (int i = 0; i < cindex; i++)
		{
			bill += cart[i]->getcost();
		}
		delete cart;
		cindex = 0;
		MessageBox::Show("Total price: " + bill + " Checkout successful!!\n");
		
	}
	void viewwishlist(int windex, array<Menus^>^ cart)
	{
		for (int i = 0; i < windex; i++)
		{
			MessageBox::Show(i + 1 + ". Name:" + getname() + " Cost:" + getcost() + " Quantity:" + getsales() + "Points:" + getpoints());
		}
	}
};
public ref class Admin_menu :public Menus
{
public:
	void Additem(String^ n, int c, int q, int p)
	{
		int count = 0;
		array<array <String^>^>^ old_data = loadmenu(count);
		array<array <String^>^>^ new_data = gcnew array<array<String^>^>(count + 1);
		for (int i = 0; i < count + 1; i++)
		{
			new_data[i] = gcnew array<String^>(5);
		}
		for (int i = 0; i < count; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				new_data[i][j] = old_data[i][j];
			}
		}
		new_data[count + 1][0] = n;
		new_data[count + 1][1] = Convert::ToString(c);
		new_data[count + 1][2] = Convert::ToString(q);
		new_data[count + 1][3] = Convert::ToString(p);
		new_data[count + 1][4] = "0";
		StreamWriter^ write = gcnew StreamWriter("Menu.txt");
		for (int i = 0; i < count + 1; i++)
		{
			write->WriteLine(new_data[i][0] + "," + new_data[i][1] + "," + new_data[i][2] + "," + new_data[i][3] + "," + new_data[i][0] + "\n");
		}
		write->Close();
	}
	void Removeitem(String^ name)
	{
		int count = 0;
		array<array <String^>^>^ data_update = loadmenu(count);
		for (int i = 0; i < count; i++)
		{
			if (data_update[i][0] == name)
			{
				data_update[i][1] = "0";
				break;
			}
		}
		StreamWriter^ write = gcnew StreamWriter("Menu.txt");
		for (int i = 0; i < count; i++)
		{
			write->WriteLine(data_update[i][0] + "," + data_update[i][1] + "," + data_update[i][2] + "," + data_update[i][3] + "," + data_update[i][0] + "\n");
		}
		write->Close();
	}
	array<array <String^>^>^ viewstatistics(int& c)
	{

		array<array <String^>^>^ stat = loadmenu(c);
		/*for (int i = 0; i < count; i++)
		{
			MessageBox::Show("Name: " + stat[i][0] + " Sales" + stat[i][4] + " \n");
		}*/
		return stat;
	}
};