#include "Loyalty_Rewards.h"
#include"Rewards_200.h"
#include"Layers_menu.h"
#include"Rewards_400.h"
#include"Rewards_600.h"
#include"Rewards_800.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;



System::Void try3::Loyalty_Rewards::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Layers_menu^ menu = gcnew Layers_menu();
	menu->Show();
	this->Hide();

}

System::Void try3::Loyalty_Rewards::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Rewards_200^ redeem = gcnew Rewards_200();
	redeem->Show();
	this->Hide();
 }

System::Void try3::Loyalty_Rewards::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Rewards_400^ reward = gcnew Rewards_400();
	reward->Show();
	this->Hide();
}

System::Void try3::Loyalty_Rewards::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Rewards_600^ redeem = gcnew Rewards_600();
	redeem->Show();
	this->Hide();
 }

System::Void try3::Loyalty_Rewards::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	Rewards_800^ redeem = gcnew Rewards_800();
	redeem->Show();
	this->Hide();

 }

