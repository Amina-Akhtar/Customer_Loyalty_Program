#include "MyCart.h"
#include "Layers_menu.h"  
#include"CheckOut.h"
#include"IntroPage.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


System::Void try3::MyCart::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Layers_menu^ goBack = gcnew Layers_menu();
	goBack->Show();
	this->Hide();

}

System::Void try3::MyCart::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
	CheckOut^ finalStep = gcnew CheckOut();
	finalStep->Show();
	this->Hide();
}

System::Void try3::MyCart::MyCart_Load(System::Object^ sender, System::EventArgs^ e)
{
	textBox4->Text = "Item Name\r\t\t        " + "Price\r\t             " + "Quantity\r\t         " + "Points Recieved";

	for (int i = 0; i < chek; i++)
	{
		textBox1->Text = textBox1->Text + cart[i]->getname() + "      \r\t        " + cart[i]->getcost() + "\r\t\t" + cart[i]->getqty() + "\r\t\t" + cart[i]->getpoints() + "\r\n";

	}
}
