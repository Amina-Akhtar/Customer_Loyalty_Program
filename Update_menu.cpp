#include "Update_menu.h"
#include"admin_brownie_menu.h"
#include"admin_sundae_menu.h"
#include"admin_cakes_menu.h"
#include "Admin_Menu.h"  
#include"admin_cupcake_menu.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


System::Void try3::Update_menu::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Admin_Menu^ back = gcnew Admin_Menu();
	back->Show();
	this->Hide();

 }

System::Void try3::Update_menu::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	admin_cupcake_menu^ change = gcnew admin_cupcake_menu();
	change->Show();
	this->Hide();
}

System::Void try3::Update_menu::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	admin_cakes_menu^ change = gcnew admin_cakes_menu();
	change->Show();
	this->Hide();

}

System::Void try3::Update_menu::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	admin_sundae_menu^ change = gcnew admin_sundae_menu();
	change->Show();
	this->Hide();
}

System::Void try3::Update_menu::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	admin_brownie_menu^ change = gcnew admin_brownie_menu();
	change->Show();
	this->Hide();

}
