#include "sundae_menu.h"
#include"Layers_menu.h"
#include"User.h"
#include "Menu.h"

 using namespace System;
 using namespace System::ComponentModel;
 using namespace System::Collections;
 using namespace System::Windows::Forms;
 using namespace System::Data;
 using namespace System::Drawing;


 System::Void try3::sundae_menu::button16_Click(System::Object^ sender, System::EventArgs^ e) {
	 Layers_menu^ goBack = gcnew Layers_menu();
	 goBack->Show();
	 this->Hide();
 }

 System::Void try3::sundae_menu::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun1 = "Red Velvet Sundae";
	User_menu^ sun_1 = gcnew User_menu(sun1);
	sun_1->Addtocart(sun1, ind, cart);
	cart[ind]->getpoints();
	ind++;
}
 System::Void try3::sundae_menu::button14_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun2 = "3 Milk Sundae                     ";
	User_menu^ sun_2 = gcnew User_menu(sun2);
	sun_2->Addtocart(sun2, ind, cart);
	cart[ind]->getpoints();
	ind++;

}
 System::Void try3::sundae_menu::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun3 = "3 Milk Lotus Sundae";
	User_menu^ sun_3 = gcnew User_menu(sun3);
	sun_3->Addtocart(sun3, ind, cart);
	cart[ind]->getpoints();
	ind++;
}
 System::Void try3::sundae_menu::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun4 = "Galaxy Sundae                     ";
	User_menu^ sun_4 = gcnew User_menu(sun4);
	sun_4->Addtocart(sun4, ind, cart);
	cart[ind]->getpoints();
	ind++;

}
 System::Void try3::sundae_menu::button12_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun5 = "Nutella Sundae               ";
	User_menu^ sun_5 = gcnew User_menu(sun5);
	sun_5->Addtocart(sun5, ind, cart);
	cart[ind]->getpoints();
	ind++;
}
 System::Void try3::sundae_menu::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	 String^ sun6 = "Salted Caramel Sundae";
	 User_menu^ sun_6 = gcnew User_menu(sun6);
	 sun_6->Addtocart(sun6, ind, cart);
	 cart[ind]->getpoints();
	 ind++;
 }
 System::Void try3::sundae_menu::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun_1 = "Red Velvet Sundae";
	User_menu^ sun1 = gcnew User_menu(sun_1);
	sun1->Addtowishlist(sun_1, wind, wl);
	wind++;
}
 System::Void try3::sundae_menu::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun_2 = "3 Milk Lotus Sundae";
	User_menu^ sun2 = gcnew User_menu(sun_2);
	sun2->Addtowishlist(sun_2, wind, wl);
	wind++;
}
 System::Void try3::sundae_menu::button15_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun_3 = "3 Milk Sundae                     ";
	User_menu^ sun3 = gcnew User_menu(sun_3);
	sun3->Addtowishlist(sun_3, wind, wl);
	wind++;
}
 System::Void try3::sundae_menu::button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun_4 = "Salted Caramel Sundae";
	User_menu^ sun4 = gcnew User_menu(sun_4);
	sun4->Addtowishlist(sun_4, wind, wl);
	wind++;
}
 System::Void try3::sundae_menu::button13_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun_5 = "Nutella Sundae               ";
	User_menu^ sun5 = gcnew User_menu(sun_5);
	sun5->Addtowishlist(sun_5, wind, wl);
	wind++;
}
 System::Void try3::sundae_menu::button11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sun_6 = "Galaxy Sundae                     ";
	User_menu^ sun6 = gcnew User_menu(sun_6);
	sun6->Addtowishlist(sun_6, wind, wl);
	wind++;
}
