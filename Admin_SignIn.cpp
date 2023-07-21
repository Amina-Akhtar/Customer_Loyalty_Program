#include "Admin_SignIn.h"
#include"Admin_Menu.h"    
#include "User.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

System::Void try3::Admin_SignIn::button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0)
	{
		MessageBox::Show("Enter username and password");
	}
	else
	{
		Administrator^ obj = gcnew Administrator();
		obj->setuserid(textBox1->Text);
		obj->setpassword(textBox2->Text);

		if (obj->signin("Administrator"))
		{
			MessageBox::Show("You've successfully signed in!");
			Admin_Menu^ menu = gcnew Admin_Menu();
			menu->Show();
			this->Hide();
		}

		else
		{
			MessageBox::Show("Incorrect username or password");
		}
	}
}
