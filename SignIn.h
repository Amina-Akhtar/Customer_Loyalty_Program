#pragma once
#include"Layers_menu.h"
#include"SignUp.h"
namespace try3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for SignIn
	/// </summary>
	public ref class SignIn : public System::Windows::Forms::Form
	{
	public:
		SignIn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignIn()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	protected:

	protected:


	protected:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignIn::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(175, 499);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(744, 27);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SignIn::textBox1_KeyDown);
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->panel3->Cursor = System::Windows::Forms::Cursors::No;
			this->panel3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->panel3->Location = System::Drawing::Point(175, 520);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(600, 2);
			this->panel3->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->panel1->Cursor = System::Windows::Forms::Cursors::No;
			this->panel1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->panel1->Location = System::Drawing::Point(175, 640);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 2);
			this->panel1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox2->Location = System::Drawing::Point(175, 619);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(744, 27);
			this->textBox2->TabIndex = 7;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SignIn::textBox2_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->label1->Location = System::Drawing::Point(170, 549);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 25);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Don\'t have an account\? ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button1->Location = System::Drawing::Point(366, 545);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 33);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Sign Up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SignIn::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button2->Location = System::Drawing::Point(178, 599);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 47);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Sign In";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SignIn::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button3->Location = System::Drawing::Point(309, 599);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 47);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SignIn::button3_Click);
			// 
			// SignIn
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->textBox1);
			this->Name = L"SignIn";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		MessageBox::Show("The program is terminated.");
		Application::Exit();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox2->Focus();
		}

	}
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			button2->PerformClick();
		}
	}
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	   public:

	   String^ Textbox1Value()
	   {
		   return textBox1->Text;
	   }
};
}
