#include "IntroPage.h"
#include"SignIn.h"
#include "Admin_SignIn.h"
#include <Windows.h>

using namespace try3;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew IntroPage());
	return 0;
}

System::Void try3::IntroPage:: button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("The program is terminated");
	Application::Exit();
}

System::Void  try3::IntroPage::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Admin_SignIn^ form2 = gcnew Admin_SignIn();
	form2->Show();
	this->Hide();
}

System::Void  try3::IntroPage::button1_Click(System::Object^ sender, System::EventArgs^ e) {

	SignIn^ form2 = gcnew SignIn();
	form2->Show();
	this->Hide();
}
