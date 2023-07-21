#pragma once
#include<Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


public ref class User
{
protected:
	String^ password;
	String^ email;
public:
	String^ userid;
	//constructors
	User()
	{
		userid = " ";
		email = " ";
		password = " ";
	}
	User(String^ id, String^ mail, String^ pass)
	{
		userid = id;
		email = mail;
		password = pass;
	}
	//	getters and setters
	void setuserid(String^ id)
	{
		userid = id;
	}
	void setemail(String^ mail)
	{

		email = mail;
	}
	void setpassword(String^ pass)
	{
		password = pass;
	}
	String^ getemail()
	{
		return email;
	}
	String^ getuserid()
	{
		return userid;
	}
	String^ getpassword()
	{
		return password;
	}
	//functions
	virtual void signup(String^ file)
	{
		StreamWriter^ write = gcnew StreamWriter(file + ".txt", true);
		write->WriteLine(userid);
		write->WriteLine(password);
		write->Close();
		MessageBox::Show("Account created successfully!");
	}

	bool verification(String^ file)
	{
		StreamReader^ write = gcnew StreamReader(file + ".txt");
		while (write->Peek() >= 0)
		{
			String^ id = write->ReadLine();
			String^ pass = write->ReadLine();
			if (id == userid && pass == password)
			{
				write->Close();
				return true;
				break;
			}
		}

		write->Close();
		return false;
	}

	virtual bool signin(String^ file)
	{
		if (verification(file))
		{
			MessageBox::Show("Sign in successfull!");
			return true;
		}
		else
		{
			MessageBox::Show("Sign in unsuccessfull!");
			return false;
		}
	}

};
public ref class Administrator :public User
{
public:

	//constructors
	Administrator()
	{

	}
	Administrator(String^ id, String^ mail, String^ p) :User(id, mail, p)
	{

	}

	virtual void signup(String^ file)override
	{
		User::signup("Administrator");
	}

	virtual bool signin(String^ file) override
	{
		return User::signin("Administrator");
	}


};

public ref class Customer :public User
{
private:
	int points, level;
public:

	//constructor
	Customer() :User()
	{

	}
	Customer(Customer^ const &pobj) :User(pobj->userid,pobj->email,pobj->password)
	{
		points = pobj->points;
		level = pobj->level;
	}
	Customer(String^ n, int pnt, int l, String^ mail, String^ p) :User(n, mail, p)
	{
		points = pnt;
		level = l;
	}
	//getters and setters

	void setpoints(int p)
	{
		points = p;
	}
	int getpoints()
	{
		return points;
	}
	void setlevel(int l)
	{
		level = l;
	}
	int getlevel()
	{
		return level;
	}

	virtual void signup(String^ file) override
	{
		StreamWriter^ write = gcnew StreamWriter(file + ".txt", true);

		write->WriteLine(userid);
		write->WriteLine(password);
		write->WriteLine(points);
		write->WriteLine(level);
		write->Close();
		MessageBox::Show("Account created successfully!");
	}

	virtual bool signin(String^ file) override
	{
		return User::signin("Customer");
	}
	//functions
	//data in administrator file is stored in the format
	//	id,password id1,password1 ...
		//data in customer file is stored in the format
		//id,password points,level
		//id1,password1 points1,level1

	Customer^ returnobject()
	{
		return this;
	}

	array<array <String^>^>^ loadinfo(int& count)
	{
		StreamReader^ read = gcnew StreamReader("Customer.txt");
		while (read->Peek() >= 0)
		{
			String^ id = read->ReadLine();
			String^ pass = read->ReadLine();
			int p = Convert::ToInt32(read->ReadLine());
			int l = Convert::ToInt32(read->ReadLine());
			count++;
		}
		read->Close();
		array<array <String^>^>^ info = gcnew array<array<String^>^>(count);
		for (int i = 0; i < count; i++)
		{
			info[i] = gcnew array<String^>(4);
		}
		StreamReader^ write = gcnew StreamReader("Customer.txt");
		for (int i = 0; i < count; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				info[i][j] = write->ReadLine();
			}
		}
		write->Close();
		return info;
	}

	void updateprofilepassword(String^ p)
	{
		setpassword(p);
		int count = 0;
		array<array <String^>^>^ information = loadinfo(count);
		for (int i = 0; i < count; i++)
		{
			if (information[i][0] == userid)
			{
				information[i][1] = p;
				break;
			}
		}
		//updating the data in file
		StreamWriter^ update = gcnew StreamWriter("Customer.txt");
		for (int i = 0; i < count; i++)
		{
			update->WriteLine(information[i][0] + "," + information[i][1] + " " + information[i][2] + "," + information[i][3] + "\n");
		}
		update->Close();
	}
	void updateprofileemail(String^ e)
	{
		User::setemail(e);
	}

	void updatepoints(int p)
	{
		int count = 0, hint = 0;
		array<array <String^>^>^ information = loadinfo(count);
		for (int i = 0; i < count; i++)
		{
			if (information[i][0] == userid)
			{
				information[i][2] = Convert::ToString(Convert::ToInt32(information[i][2]) + p);
				if (Convert::ToInt32(information[i][2]) >= Convert::ToInt32(information[i][3]) * 50)
				{
					information[i][3] = updatelevel(1);
				}
			}
		}
		StreamWriter^ update = gcnew StreamWriter("Customer.txt");
		for (int i = 0; i < count; i++)
		{
			update->WriteLine(information[i][0]);
			update->WriteLine(information[i][1]);
			update->WriteLine(information[i][2]);
			update->WriteLine(information[i][3]);
		}
		update->Close();
	}
	String^ updatelevel(int l)
	{
		int count = 0;
		array<array <String^>^>^ information = loadinfo(count);
		for (int i = 0; i < count; i++)
		{
			if (information[i][0] == userid)
			{
				information[i][3] = Convert::ToString(Convert::ToInt32(information[i][3]) + l);
				return information[i][3];
			}
		}

	}
	
	void viewprofile()
	{
		MessageBox::Show("Name: " + userid + " \nID: " + User::getuserid() + " \n Points: " + points + " \nLevel: " + level);
	}
};


