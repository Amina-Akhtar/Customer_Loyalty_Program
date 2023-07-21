#include "admin_brownie_menu.h"
#include "Menu.h"
#include"Update_menu.h"    

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

void UpdateData_b(String^ n)
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

System::Void  try3::admin_brownie_menu::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
	Update_menu^ back = gcnew Update_menu();
	back->Show();
	this->Hide();

}

System::Void  try3::admin_brownie_menu::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ br1 = "Peanut Butter Stack";
	UpdateData_b(br1);
}

System::Void  try3::admin_brownie_menu::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ br3 = "Cadbury Brownie";
	UpdateData_b(br3);
}

System::Void  try3::admin_brownie_menu::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ br5 = "Nutella Brownie";
	UpdateData_b(br5);
}

System::Void  try3::admin_brownie_menu::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ br2 = "Belgian Malt Brownie";
	UpdateData_b(br2);
}

System::Void  try3::admin_brownie_menu::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ br4 = "Chocolate Chunk Brownie";
	UpdateData_b(br4);
}

System::Void  try3::admin_brownie_menu::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ br6 = "Mars Chocolate Brownie";
	UpdateData_b(br6);
}


