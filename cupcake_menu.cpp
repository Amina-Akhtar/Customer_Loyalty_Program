#include "cupcake_menu.h"
#include"Layers_menu.h"
#include "User.h"
#include "Menu.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


System::Void try3::cupcake_menu::button16_Click(System::Object^ sender, System::EventArgs^ e) {
	Layers_menu^ goBack = gcnew Layers_menu();
	goBack->Show();
	this->Hide();
}


 System::Void  try3::cupcake_menu::button13_Click(System::Object^ sender, System::EventArgs^ e) {
	MyCart^ items = gcnew MyCart();
	items->Show();
	this->Hide();
}

 System::Void try3::cupcake_menu::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	 String^ cc1 = "Salted Caramel Cupcake";
	 User_menu^ cc_1 = gcnew User_menu(cc1);
	 cc_1->Addtocart(cc1, ind, cart);
	 cart[ind]->getpoints();
	 ind++;

 }
System::Void try3::cupcake_menu:: button11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc2 = "Milk Chocolate Cupcake";
	User_menu^ cc_2 = gcnew User_menu(cc2);
	cc_2->Addtocart(cc2, ind, cart);
	cart[ind]->getpoints();
	ind++;

}
System::Void try3::cupcake_menu::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc3 = "Red Velvet Cupcake";
	User_menu^ cc_3 = gcnew User_menu(cc3);
	cc_3->Addtocart(cc3, ind, cart);
	cart[ind]->getpoints();
	ind++;
}
System::Void try3::cupcake_menu::button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc4 = "Lite Coffee Cupcake";
	User_menu^ cc_4 = gcnew User_menu(cc4);
	cc_4->Addtocart(cc4, ind, cart);
	cart[ind]->getpoints();
	ind++;

}
System::Void try3::cupcake_menu::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc5 = "Nutella Cupcake     ";
	User_menu^ cc_5 = gcnew User_menu(cc5);
	cc_5->Addtocart(cc5, ind, cart);
	cart[ind]->getpoints();
	ind++;

}
System::Void try3::cupcake_menu::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc6 = "Swiss Chocolate Cupcake";
	User_menu^ cc_6 = gcnew User_menu(cc6);
	cc_6->Addtocart(cc6, ind, cart);
	cart[ind]->getpoints();
	ind++;
}
System::Void try3::cupcake_menu::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc1 = "Salted Caramel Cupcake";
	User_menu^ cc_1 = gcnew User_menu(cc1);
	cc_1->Addtowishlist(cc1, wind, wl);
	wind++;
}
System::Void try3::cupcake_menu::button12_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc2 = "Milk Chocolate Cupcake";
	User_menu^ cc_2 = gcnew User_menu(cc2);
	cc_2->Addtowishlist(cc2, wind, wl);
	wind++;
}
System::Void try3::cupcake_menu::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc3 = "Red Velvet Cupcake";
	User_menu^ cc_3 = gcnew User_menu(cc3);
	cc_3->Addtowishlist(cc3, wind, wl);
	wind++;
}
System::Void try3::cupcake_menu::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc4 = "Lite Coffee Cupcake";
	User_menu^ cc_4 = gcnew User_menu(cc4);
	cc_4->Addtowishlist(cc4, wind, wl);
	wind++;
}
System::Void try3::cupcake_menu::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc5 = "Nutella Cupcake     ";
	User_menu^ cc_5 = gcnew User_menu(cc5);
	cc_5->Addtowishlist(cc5, wind, wl);
	wind++;
}
System::Void try3::cupcake_menu::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cc6 = "Swiss Chocolate Cupcake";
	User_menu^ cc_6 = gcnew User_menu(cc6);
	cc_6->Addtowishlist(cc6, wind, wl);
	wind++;
}


