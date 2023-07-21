#include "brownie_menu.h"
#include"Layers_menu.h"
#include "User.h"
#include "Menu.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


System::Void try3::brownie_menu::button16_Click(System::Object^ sender, System::EventArgs^ e) {
	Layers_menu^ goBack = gcnew Layers_menu();
	goBack->Show();
	this->Hide();
}
System::Void try3::brownie_menu::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br1 = "Peanut Butter Stack";
	User_menu^ br_1 = gcnew User_menu(br1);
	br_1->Addtocart(br1, ind, cart);
	cart[ind]->getpoints();
	ind++;
}
System::Void try3::brownie_menu::button14_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br3 = "Cadbury Brownie";
	User_menu^ br_3 = gcnew User_menu(br3);
	br_3->Addtocart(br3, ind, cart);
	cart[ind]->getpoints();
	ind++;
}
System::Void try3::brownie_menu::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br2 = "Belgian Malt Brownie";
	User_menu^ br_2 = gcnew User_menu(br2);
	br_2->Addtocart(br2, ind, cart);
	cart[ind]->getpoints();
	ind++;
}


System::Void try3::brownie_menu::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br4 = "Chocolate Chunk Brownie";
	User_menu^ br_4 = gcnew User_menu(br4);
	br_4->Addtocart(br4, ind, cart);
	cart[ind]->getpoints();
	ind++;

}
System::Void try3::brownie_menu::button12_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br5 = "Nutella Brownie     ";
	User_menu^ br_5 = gcnew User_menu(br5);
	br_5->Addtocart(br5, ind, cart);
	cart[ind]->getpoints();
	ind++;

}
System::Void try3::brownie_menu::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br6 = "Mars Chocolate Brownie";
	User_menu^ br_6 = gcnew User_menu(br6);
	br_6->Addtocart(br6, ind, cart);
	cart[ind]->getpoints();
	ind++;

}

System::Void try3::brownie_menu::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br_1 = "Peanut Butter Stack";
	User_menu^ br1 = gcnew User_menu(br_1);
	br1->Addtowishlist(br_1, wind, wl);
	wind++;
}
System::Void try3::brownie_menu::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br_2 = "Belgian Malt Brownie";
	User_menu^ br2 = gcnew User_menu(br_2);
	br2->Addtowishlist(br_2, wind, wl);
	wind++;
}

System::Void try3::brownie_menu::button15_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br_3 = "Cadbury Brownie";
	User_menu^ br3 = gcnew User_menu(br_3);
	br3->Addtowishlist(br_3, wind, wl);
	wind++;
}
System::Void try3::brownie_menu::button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br_4 = "Chocolate Chunk Brownie";
	User_menu^ br4 = gcnew User_menu(br_4);
	br4->Addtowishlist(br_4, wind, wl);
	wind++;
}

System::Void try3::brownie_menu::button13_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br_5 = "Nutella Brownie     ";
	User_menu^ br5 = gcnew User_menu(br_5);
	br5->Addtowishlist(br_5, wind, wl);
	wind++;
}
System::Void try3::brownie_menu::button11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ br_6 = "Mars Chocolate Brownie";
	User_menu^ br6 = gcnew User_menu(br_6);
	br6->Addtowishlist(br_6, wind, wl);
	wind++;
}

