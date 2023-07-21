#include "Admin_SignUp.h"
#include "Admin_Menu.h" 
#include "User.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

 System::Void try3::Admin_SignUp::button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	 if (textBox1->Text->Length == 0 || textBox4->Text->Length == 0 || textBox2->Text->Length == 0)
	 {
		 MessageBox::Show("Please enter all reqired details");
	 }

	 else
	 {
		 Administrator^ newadmin = gcnew Administrator(textBox1->Text, textBox4->Text, textBox2->Text);
		 newadmin->signup("Administrator");
		 MessageBox::Show("You've successfully signed in!");
		 Admin_Menu^ menu = gcnew Admin_Menu();
		 menu->Show();
		 this->Hide();
	 }
}
