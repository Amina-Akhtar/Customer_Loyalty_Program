#include "admin_cupcake_menu.h"
#include"Update_menu.h" 
#include "Menu.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

void UpdateData_c(String^ n)
{
	int c = 0;
	Menus^ obj = gcnew Menus();
	array<array <String^>^>^ items = obj->loadmenu(c);

	for (int i = 0; i < c; i++)
	{
		if (items[i][0] == n)
		{
			items[i][2] = Convert::ToString(Convert::ToInt32(items[i][2]) + 5);
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

System::Void  try3::admin_cupcake_menu::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
	Update_menu^ update = gcnew Update_menu();
	update->Show();
	this->Hide();
}


System::Void  try3::admin_cupcake_menu::button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ cc_1 = "Salted Caramel Cupcake";
	UpdateData_c(cc_1);
}


System::Void  try3::admin_cupcake_menu::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cc_2 = "Red Velvet Cupcake";
	UpdateData_c(cc_2);
}

System::Void  try3::admin_cupcake_menu::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cc_3 = "Nutella Cupcake     ";
	UpdateData_c(cc_3);
}

System::Void  try3::admin_cupcake_menu::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cc_4 = "Milk Chocolate Cupcake";
	UpdateData_c(cc_4);
}

System::Void  try3::admin_cupcake_menu::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cc_5 = "Lite Coffee Cupcake";
	UpdateData_c(cc_5);
}

System::Void  try3::admin_cupcake_menu::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ cc_6 = "Swiss Chocolate Cupcake";
	UpdateData_c(cc_6);
}