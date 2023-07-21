#include "MyAccount.h"
#include "Layers_menu.h"    
#include"IntroPage.h"
#include "User.h"

//extern Customer^ obj;

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

void clear()
{
	StreamWriter^ clear = gcnew StreamWriter("Wishlist.txt");
	clear->WriteLine("");
	clear->Close();
	StreamWriter^ wclear = gcnew StreamWriter("Cart.txt");
	wclear->WriteLine("1234");
	wclear->Close();

}

System::Void try3::MyAccount::MyAccount_Load(System::Object^ sender, System::EventArgs^ e)
{
	SignIn^ signIn = gcnew SignIn();
	StreamReader^ n = gcnew StreamReader("Random.txt");
	String^ nam = n->ReadLine();
	n->Close();
	Customer^ newobj = gcnew Customer();

	
	int chek = 0;

	array<array <String^>^>^ info = newobj->loadinfo(chek);

	int b = 0;

	for (int i = 0; i < chek; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (info[i][j] == nam)
			{
				label2->Text = info[i][j];
				label3->Text = info[i][j + 2];
				label4->Text = info[i][j + 3];
				b++;
			}
			
		}
		if (b > 0)
		{
			break;
		}
		
	}
}

System::Void try3::MyAccount::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Layers_menu^ goBack = gcnew Layers_menu();
	goBack->Show();
	this->Hide();

}

System::Void  try3::MyAccount::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	clear();
	MessageBox::Show("You have successfully Logged out!");
	IntroPage^ start = gcnew IntroPage();
	start->Show();
	this->Hide();
}

