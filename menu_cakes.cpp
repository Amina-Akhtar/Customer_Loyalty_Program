#include "menu_cakes.h"
#include"Layers_menu.h"
   
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

System::Void try3::menu_cakes::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
Layers_menu^ goBack = gcnew Layers_menu();
	goBack->Show();
	this->Hide();
}
