#include "admin_cakes_menu.h"
#include"Update_menu.h" 
#include "Menu.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

void UpdateData(String^ n)
{
	int c = 0;
	Menus^ obj = gcnew Menus();
	array<array <String^>^>^ items = obj->loadmenu(c);

	for (int i = 0; i < c; i++)
	{
		if (items[i][0] == n)
		{
		    items[i][2] =Convert::ToString(Convert::ToInt32(items[i][2])+ 5);
		}
	}

	StreamWriter^ write = gcnew StreamWriter("Menu.txt");
	for (int i = 0; i < c; i++)
	{
		write->WriteLine(items[i][0]);
		write->WriteLine(items[i][1]);
		write->WriteLine(items[i][2]);
		write->WriteLine(items[i][3]);
		write->WriteLine(items[i][4]);

	}
	write->Close();

	MessageBox::Show("5 more " + n + " added", "Successful");
}
System::Void  try3::admin_cakes_menu::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cake1_name = "Belgian Malt Cake";
	UpdateData(cake1_name);
}

System::Void  try3::admin_cakes_menu::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cake3_name = "Lotus Cake                     ";
	UpdateData(cake3_name);
}

System::Void  try3::admin_cakes_menu::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cake6_name = "Raffaello Cake                     ";
	UpdateData(cake6_name);
}

System::Void  try3::admin_cakes_menu::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cake2_name = "Ferrero Rocher Cake";
	UpdateData(cake2_name);
}

System::Void  try3::admin_cakes_menu::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cake4_name = "3 Milk Cake                     ";
	UpdateData(cake4_name);
}

System::Void  try3::admin_cakes_menu::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cake5_name = "Kit Kat Cake                     ";
	UpdateData(cake5_name);
}

System::Void  try3::admin_cakes_menu::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
	Update_menu^ update = gcnew Update_menu();
	update->Show();
	this->Hide();
}
