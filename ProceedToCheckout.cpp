#include "ProceedToCheckout.h"
#include"Layers_menu.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

System::Void try3::ProceedToCheckout::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
	Layers_menu^ back = gcnew Layers_menu();
	back->Show();
	this->Hide();
}
