#include "CheckOut.h"
#include "MyCart.h"
#include"ProceedToCheckout.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


void done()
{
	StreamWriter^ wclear = gcnew StreamWriter("Cart.txt");
	wclear->WriteLine("1234");
	wclear->Close();
}


System::Void try3::CheckOut::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyCart^ acc = gcnew MyCart();
	acc->Show();
	this->Hide();
}
System::Void try3::CheckOut::CheckOut_Load(System::Object^ sender, System::EventArgs^ e)
{
	textBox4->Text = "Item Name\r\t\t        " + "Price\r\t             " + "Quantity\r\t         " + "Points Recieved";
	for (int i = 0; i < chek; i++)
	{
		
		textBox1->Text = textBox1->Text   + cart[i]->getname() + "      \r\t        " + cart[i]->getcost() + "\r\t\t" + cart[i]->getqty() + "\r\t\t" + cart[i]->getpoints() + "\r\n";
		

	}

	int cost=0, points=0;
	for (int i = 0; i < chek; i++)
	{
		int c = cart[i]->getcost();
		cost += c;
		int p = cart[i]->getpoints();
		points += p;
	}
	textBox2->Text = Convert::ToString(cost);
	textBox3->Text = Convert::ToString(points);
	user->updatepoints(points);
}

System::Void try3::CheckOut::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
	ProceedToCheckout^ go = gcnew ProceedToCheckout();
	go->Show();
	this->Hide();
	done();
}
