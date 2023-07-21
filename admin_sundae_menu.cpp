#include "admin_sundae_menu.h"
#include"Update_menu.h"
#include "Menu.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


void UpdateData_s(String^ n)
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

System::Void try3::admin_sundae_menu::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
	Update_menu^ back = gcnew Update_menu();
	back->Show();
	this->Hide();
}


System::Void try3::admin_sundae_menu::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun1 = "Red Velvet Sundae";
	UpdateData_s(sun1);
}

System::Void try3::admin_sundae_menu::button11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun3 = "3 Milk Lotus Sundae";
	UpdateData_s(sun3);
}

System::Void try3::admin_sundae_menu::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun2 = "3 Milk Sundae                     ";
	UpdateData_s(sun2);
}

System::Void try3::admin_sundae_menu::button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun6 = "Salted Caramel Sundae";
	UpdateData_s(sun6);
}

System::Void try3::admin_sundae_menu::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun5 = "Nutella Sundae               ";
	UpdateData_s(sun5);
}

System::Void try3::admin_sundae_menu::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun4 = "Galaxy Sundae                     ";
	UpdateData_s(sun4);
}




