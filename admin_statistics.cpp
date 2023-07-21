#include "admin_statistics.h"
#include"Admin_Menu.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

System::Void try3::admin_statistics::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Admin_Menu^ menu = gcnew Admin_Menu();
	menu->Show();
	this->Hide();

}

System::Void try3::admin_statistics::admin_statistics_Load(System::Object^ sender, System::EventArgs^ e)
{
	array<int>^ sales = gcnew array<int>(c2);
	for (int i = 0; i < c2; i++)
	{
		sales[i] = Convert::ToInt32(items[i][4]);
	}
	int temp;
	for (int i = 0; i < c2; i++)
	{
		for (int j = i + 1; j < c2; j++)
		{
			if (sales[i] < sales[j])
			{
				temp = sales[i];
				sales[i] = sales[j];
				sales[j] = temp;
			}
		}
	}
	int a = 0;
	array<int>^ ind = gcnew array<int>(c2);
	int j = 0;
	for (int i = 0; j < c2; i++)
	{
		if (sales[j] == Convert::ToInt32(items[i][4]))
		{
			a = i;
			for (int k = 0; k < j; k++)
			{
				if (ind[k] == i)
				{
					i = -2;
				}
			}
			if (i != -2)
			{
				ind[j++] = i;
				i = -1;
			}
			else
			{
				i = a;
			}
		}
		
	}
	textBox4->Text = "Item Name\r\t\t\t" + "Item sales";
	for (int i = 0; i < c2; i++)
	{
		textBox1->Text = textBox1->Text + items[ind[i]][0] +  "     \r\t\t " + items[ind[i]][4] + "\r\n";
	}

	
}