#include "MyWishlist.h"
#include"Layers_menu.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

System::Void try3::MyWishlist::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Layers_menu^ back = gcnew Layers_menu();
	back->Show();
	this->Hide();
}

System::Void try3::MyWishlist::MyWishlist_Load(System::Object^ sender, System::EventArgs^ e)
{
	textBox4->Text = "Item Name";
	for (int i = 0; i < chek; i++)
	{
		textBox1->Text = textBox1->Text+wishlist[i]+"\r\n";
	}
}