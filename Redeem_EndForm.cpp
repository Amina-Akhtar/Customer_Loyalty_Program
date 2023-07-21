#include "Redeem_EndForm.h"
#include"Loyalty_Rewards.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

System::Void try3::Redeem_EndForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Loyalty_Rewards^ back = gcnew Loyalty_Rewards();
	back->Show();
	this->Hide();
}
