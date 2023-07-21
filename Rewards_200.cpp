#include "Rewards_200.h"
#include"Loyalty_Rewards.h"
#include"Redeem_EndForm.h"
#include"EndForm_Negative.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

System::Void try3::Rewards_200::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Loyalty_Rewards^ back = gcnew Loyalty_Rewards();
	back->Show();
	this->Hide();
}

System::Void try3::Rewards_200::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < c2; i++)
	{
		if (inform[i][0] == us)
		{
			if (Convert::ToInt32(inform[i][2]) >= 200)
			{
				user->updatepoints(-200);
				Redeem_EndForm^ end = gcnew Redeem_EndForm();
				end->Show();
				this->Hide();
			}
			else
			{
				EndForm_Negative^ end = gcnew EndForm_Negative();
				end->Show();
				this->Hide();
			}
		}

	}

}

System::Void try3::Rewards_200::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < c2; i++)
	{
		if (inform[i][0] == us)
		{
			if (Convert::ToInt32(inform[i][2]) >= 200)
			{
				user->updatepoints(-200);
				Redeem_EndForm^ end = gcnew Redeem_EndForm();
				end->Show();
				this->Hide();
			}
			else
			{
				EndForm_Negative^ end = gcnew EndForm_Negative();
				end->Show();
				this->Hide();
			}
		}

	}

 }

System::Void try3::Rewards_200::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < c2; i++)
	{
		if (inform[i][0] == us)
		{
			if (Convert::ToInt32(inform[i][2]) >= 200)
			{
				user->updatepoints(-200);
				Redeem_EndForm^ end = gcnew Redeem_EndForm();
				end->Show();
				this->Hide();
			}
			else
			{
				EndForm_Negative^ end = gcnew EndForm_Negative();
				end->Show();
				this->Hide();
			}
		}

	}
}

System::Void try3::Rewards_200::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < c2; i++)
	{
		if (inform[i][0] == us)
		{
			if (Convert::ToInt32(inform[i][2]) >= 200)
			{
				user->updatepoints(-200);
				Redeem_EndForm^ end = gcnew Redeem_EndForm();
				end->Show();
				this->Hide();
			}
			else
			{
				EndForm_Negative^ end = gcnew EndForm_Negative();
				end->Show();
				this->Hide();
			}
		}

	}
}
