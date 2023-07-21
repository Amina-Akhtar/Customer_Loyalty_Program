#include "SignIn.h"
#include"Layers_menu.h"
#include"SignUp.h"
#include "User.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


System::Void try3::SignIn:: button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0)
	{
		MessageBox::Show("Enter username and password");
	}

	else
	{
		Customer^ obj = gcnew Customer();
		obj->setuserid(textBox1->Text);
		obj->setpassword(textBox2->Text);
		

		if (obj->signin("Customer"))
		{
			StreamWriter^ chek = gcnew StreamWriter("Random.txt");
			chek->WriteLine(textBox1->Text);
			chek->Close();
			Layers_menu^ menu = gcnew Layers_menu(obj);
			menu->Show();
			this->Hide();
		}
		else
		{
			MessageBox::Show("Incorrect Username or Password");
		}
	}
}

System::Void try3::SignIn::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SignUp^ newAcc = gcnew SignUp();
	newAcc->Show();
	this->Hide();
}