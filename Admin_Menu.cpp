#include "Admin_Menu.h"  
#include"IntroPage.h"
#include"Update_menu.h"
#include"admin_statistics.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


System::Void try3::Admin_Menu::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("You've successfully logged out!");
	IntroPage^ main = gcnew IntroPage();
	main->Show();
	this->Hide();

}


System::Void try3::Admin_Menu::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Update_menu^ change = gcnew Update_menu();
	change->Show();
	this->Hide();

}

System::Void try3::Admin_Menu::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	admin_statistics^ stat = gcnew admin_statistics();
	stat->Show();
	this->Hide();
}
