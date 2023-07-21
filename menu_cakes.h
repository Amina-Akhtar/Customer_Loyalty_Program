#pragma once
#include "Menu.h"
#include"MyCart.h"
#include "User.h"

namespace try3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for menu_cakes
	/// </summary>
	public ref class menu_cakes : public System::Windows::Forms::Form
	{
	public:

		int ind = 0;
		int wind = 0;
		array<Menus^>^ cart = gcnew array<Menus^>(10);
		StreamReader^ read = gcnew StreamReader("Random.txt");
		String^ us = read->ReadLine();
		Customer^ user = gcnew Customer();
		array<array<String^>^>^ info;
		array<Menus^>^ wl = gcnew array<Menus^>(10);

		menu_cakes(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here

			int c = 0;
			user->setuserid(us);
			array<array <String^>^>^ info = user->loadinfo(c);
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~menu_cakes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button16;
	protected:
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu_cakes::typeid));
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button16->Location = System::Drawing::Point(1174, 79);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(193, 43);
			this->button16->TabIndex = 54;
			this->button16->Text = L"Back to Menu";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &menu_cakes::button16_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button14->Location = System::Drawing::Point(609, 551);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(169, 43);
			this->button14->TabIndex = 53;
			this->button14->Text = L"Add to Cart";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &menu_cakes::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button15->Location = System::Drawing::Point(415, 551);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(169, 43);
			this->button15->TabIndex = 52;
			this->button15->Text = L"Add to Wishlist";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &menu_cakes::button15_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button12->Location = System::Drawing::Point(609, 739);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(169, 43);
			this->button12->TabIndex = 51;
			this->button12->Text = L"Add to Cart";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &menu_cakes::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button13->Location = System::Drawing::Point(415, 739);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(169, 43);
			this->button13->TabIndex = 50;
			this->button13->Text = L"Add to Wishlist";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &menu_cakes::button13_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button10->Location = System::Drawing::Point(1368, 738);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(169, 43);
			this->button10->TabIndex = 49;
			this->button10->Text = L"Add to Cart";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &menu_cakes::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button11->Location = System::Drawing::Point(1174, 738);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(169, 43);
			this->button11->TabIndex = 48;
			this->button11->Text = L"Add to Wishlist";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &menu_cakes::button11_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button8->Location = System::Drawing::Point(1361, 533);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(169, 43);
			this->button8->TabIndex = 47;
			this->button8->Text = L"Add to Cart";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &menu_cakes::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button9->Location = System::Drawing::Point(1167, 533);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(169, 43);
			this->button9->TabIndex = 46;
			this->button9->Text = L"Add to Wishlist";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &menu_cakes::button9_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button6->Location = System::Drawing::Point(1361, 327);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(169, 43);
			this->button6->TabIndex = 45;
			this->button6->Text = L"Add to Cart";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &menu_cakes::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button7->Location = System::Drawing::Point(1167, 327);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(169, 43);
			this->button7->TabIndex = 44;
			this->button7->Text = L"Add to Wishlist";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &menu_cakes::button7_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button5->Location = System::Drawing::Point(609, 328);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(169, 43);
			this->button5->TabIndex = 43;
			this->button5->Text = L"Add to Cart";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &menu_cakes::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button1->Location = System::Drawing::Point(415, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 43);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Add to Wishlist";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &menu_cakes::button1_Click);
			// 
			// menu_cakes
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Name = L"menu_cakes";
			this->Text = L"menu_cakes";
			this->ResumeLayout(false);

		}
#pragma endregion

	
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake1_name = "Belgian Malt Cake";
	User_menu^ cake1 = gcnew User_menu(cake1_name);
	cake1->Addtocart(cake1_name, ind, cart);
	cart[ind]->getpoints();
	ind++;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake2_name = "Ferrero Rocher Cake";
	User_menu^ cake2 = gcnew User_menu(cake2_name);
	cake2->Addtocart(cake2_name, ind, cart);
	cart[ind]->getpoints();
	ind++;

}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake3_name = "Lotus Cake                     ";
	User_menu^ cake3 = gcnew User_menu(cake3_name);
	cake3->Addtocart(cake3_name, ind, cart);
	cart[ind]->getpoints();
	ind++;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake4_name = "3 Milk Cake                     ";
	User_menu^ cake4 = gcnew User_menu(cake4_name);
	cake4->Addtocart(cake4_name, ind, cart);
	cart[ind]->getpoints();
	ind++;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake5_name = "Kit Kat Cake                     ";
	User_menu^ cake5 = gcnew User_menu(cake5_name);
	cake5->Addtocart(cake5_name, ind, cart);
	cart[ind]->getpoints();
	ind++;

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake6_name = "Raffaello Cake                     ";
	User_menu^ cake6 = gcnew User_menu(cake6_name);
	cake6->Addtocart(cake6_name, ind, cart);
	cart[ind]->getpoints();
	ind++;

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake1_name = "Belgian Malt Cake";
	User_menu^ cake1 = gcnew User_menu(cake1_name);
	cake1->Addtowishlist(cake1_name, wind, wl);
	wind++;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake2_name = "Lotus Cake                     ";
	User_menu^ cake2 = gcnew User_menu(cake2_name);
	cake2->Addtowishlist(cake2_name, wind, wl);
	wind++;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake3_name = "Raffaello Cake                     ";
	User_menu^ cake3 = gcnew User_menu(cake3_name);
	cake3->Addtowishlist(cake3_name, wind, wl);
	wind++;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake4_name = "Ferrero Rocher Cake";
	User_menu^ cake4 = gcnew User_menu(cake4_name);
	cake4->Addtowishlist(cake4_name, wind, wl);
	wind++;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake5_name = "3 Milk Cake                     ";
	User_menu^ cake5 = gcnew User_menu(cake5_name);
	cake5->Addtowishlist(cake5_name, wind, wl);
	wind++;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cake6_name = "Kit Kat Cake                     ";
	User_menu^ cake6 = gcnew User_menu(cake6_name);
	cake6->Addtowishlist(cake6_name, wind, wl);
	wind++;
}
};
}

