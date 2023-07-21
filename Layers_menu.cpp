#include "Layers_menu.h"
#include "menu_cakes.h"
#include "cupcake_menu.h"
#include"MyCart.h"
#include"sundae_menu.h"
#include"brownie_menu.h"
#include"MyAccount.h"
#include"MyWishlist.h"
#include"Loyalty_Rewards.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

System::Void try3::Layers_menu::button4_Click(System::Object^ sender, System::EventArgs^ e) {

	MyCart^ items = gcnew MyCart();
	this->Hide();
	items->Show();

}

System::Void  try3::Layers_menu::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	menu_cakes^ open = gcnew menu_cakes();
	open->Show();
	this->Hide();
}

System::Void try3::Layers_menu::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	cupcake_menu^ cupcakes = gcnew cupcake_menu();
	cupcakes->Show();
	this->Hide();
}

System::Void try3::Layers_menu::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	sundae_menu^ cups = gcnew sundae_menu();
	cups->Show();
	this->Hide();
}

System::Void try3::Layers_menu::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	brownie_menu^ brown = gcnew brownie_menu();
	brown->Show();
	this->Hide();

}

System::Void try3::Layers_menu::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MyAccount^ details = gcnew MyAccount();
	details->Show();
	this->Hide();
}

System::Void  try3::Layers_menu::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyWishlist^ wish = gcnew MyWishlist();
	wish->Show();
	this->Hide();
}

System::Void try3::Layers_menu::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	Loyalty_Rewards^ gift = gcnew Loyalty_Rewards();
	gift->Show();
	this->Hide();

}
