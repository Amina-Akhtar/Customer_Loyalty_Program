#include "SignUp.h"
#include"Layers_menu.h"
#include "User.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

System::Void try3::SignUp:: button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox1->Text->Length == 0 || textBox4->Text->Length == 0 || textBox2->Text->Length == 0)
	{
		MessageBox::Show("Please fill all required details");
	}
	else
	{
		Customer^ object = gcnew Customer(textBox1->Text, 0, 1, textBox4->Text, textBox2->Text);
		object->signup("Customer");
		MessageBox::Show("You've successfully signed up!");
		StreamWriter^ chek = gcnew StreamWriter("Random.txt");
		chek->WriteLine(textBox1->Text);
		chek->Close();
		Layers_menu^ menu = gcnew Layers_menu();
		menu->Show();
		this->Hide();
	}
}
