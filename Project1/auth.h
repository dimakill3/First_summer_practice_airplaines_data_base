#pragma once
#include "MyForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for auth
	/// </summary>
	public ref class auth : public System::Windows::Forms::Form
	{
	public:
		auth(void)
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
		~auth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Password;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^  Info_admin;

	protected:


	private: System::Windows::Forms::Button^  Admin;
	private: System::Windows::Forms::Button^  Holop;


	private: System::Windows::Forms::Button^  Vhod_auth_admin;
	private: System::Windows::Forms::Button^  Otmena_auth_admin;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->Info_admin = (gcnew System::Windows::Forms::Label());
			this->Admin = (gcnew System::Windows::Forms::Button());
			this->Holop = (gcnew System::Windows::Forms::Button());
			this->Vhod_auth_admin = (gcnew System::Windows::Forms::Button());
			this->Otmena_auth_admin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Password
			// 
			this->Password->Location = System::Drawing::Point(52, 159);
			this->Password->Name = L"Password";
			this->Password->PasswordChar = '*';
			this->Password->Size = System::Drawing::Size(194, 20);
			this->Password->TabIndex = 0;
			this->Password->Visible = false;
			// 
			// Info_admin
			// 
			this->Info_admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Info_admin->Location = System::Drawing::Point(12, 107);
			this->Info_admin->Name = L"Info_admin";
			this->Info_admin->Size = System::Drawing::Size(278, 37);
			this->Info_admin->TabIndex = 1;
			this->Info_admin->Text = L"Чтобы войти как администратор, нужно ввести пароль";
			this->Info_admin->Visible = false;
			// 
			// Admin
			// 
			this->Admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Admin->Location = System::Drawing::Point(15, 59);
			this->Admin->Name = L"Admin";
			this->Admin->Size = System::Drawing::Size(275, 23);
			this->Admin->TabIndex = 3;
			this->Admin->Text = L"Войти как администратор";
			this->Admin->UseVisualStyleBackColor = true;
			this->Admin->Click += gcnew System::EventHandler(this, &auth::Admin_Click);
			// 
			// Holop
			// 
			this->Holop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Holop->Location = System::Drawing::Point(15, 12);
			this->Holop->Name = L"Holop";
			this->Holop->Size = System::Drawing::Size(275, 23);
			this->Holop->TabIndex = 4;
			this->Holop->Text = L"Войти как обычный пользователь";
			this->Holop->UseVisualStyleBackColor = true;
			this->Holop->Click += gcnew System::EventHandler(this, &auth::Holop_Click);
			// 
			// Vhod_auth_admin
			// 
			this->Vhod_auth_admin->BackColor = System::Drawing::Color::LightGreen;
			this->Vhod_auth_admin->Location = System::Drawing::Point(171, 194);
			this->Vhod_auth_admin->Name = L"Vhod_auth_admin";
			this->Vhod_auth_admin->Size = System::Drawing::Size(75, 23);
			this->Vhod_auth_admin->TabIndex = 5;
			this->Vhod_auth_admin->Text = L"Войти";
			this->Vhod_auth_admin->UseVisualStyleBackColor = false;
			this->Vhod_auth_admin->Visible = false;
			this->Vhod_auth_admin->Click += gcnew System::EventHandler(this, &auth::Vhod_auth_admin_Click);
			// 
			// Otmena_auth_admin
			// 
			this->Otmena_auth_admin->BackColor = System::Drawing::Color::LightCoral;
			this->Otmena_auth_admin->Location = System::Drawing::Point(52, 194);
			this->Otmena_auth_admin->Name = L"Otmena_auth_admin";
			this->Otmena_auth_admin->Size = System::Drawing::Size(75, 23);
			this->Otmena_auth_admin->TabIndex = 6;
			this->Otmena_auth_admin->Text = L"Отмена";
			this->Otmena_auth_admin->UseVisualStyleBackColor = false;
			this->Otmena_auth_admin->Visible = false;
			this->Otmena_auth_admin->Click += gcnew System::EventHandler(this, &auth::Otmena_auth_admin_Click);
			// 
			// auth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FloralWhite;
			this->ClientSize = System::Drawing::Size(302, 331);
			this->Controls->Add(this->Otmena_auth_admin);
			this->Controls->Add(this->Vhod_auth_admin);
			this->Controls->Add(this->Holop);
			this->Controls->Add(this->Admin);
			this->Controls->Add(this->Info_admin);
			this->Controls->Add(this->Password);
			this->MaximumSize = System::Drawing::Size(318, 370);
			this->MinimumSize = System::Drawing::Size(318, 370);
			this->Name = L"auth";
			this->Text = L"auth";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Admin_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Admin->Visible = false;
			 this->Info_admin->Visible = true;
			 this->Password->Visible = true;
			 this->Otmena_auth_admin->Visible = true;
			 this->Vhod_auth_admin->Visible = true;
			 Holop->Visible = false;
}

private: System::Void Otmena_auth_admin_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Info_admin->Visible = false;
			 this->Password->Visible = false;
			 this->Otmena_auth_admin->Visible = false;
			 this->Vhod_auth_admin->Visible = false;
			 this->Admin->Visible = true;
			 Holop->Visible = false;
			 this->Password->Text = "";
}


private: System::Void Vhod_auth_admin_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ password_text = "Benjo";
			 String^ user_password; 
			 int Flag = 1;
			 if (this->Password->Text != "")
				 user_password = this->Password->Text;
			 else
				 Flag = 0;

			 if (Flag)
			 for (int i = 0; i < password_text->Length; i++)
			 if (user_password[i] != (password_text[i] - 1))
			 {
				 Flag = 0;
				 System::Windows::Forms::MessageBox::Show("Неверный пароль", "Error", MessageBoxButtons::OK);
				 this->Password->Text = "";
				 break;
			 }

			 if (Flag)
			 {
				 extern int  Admin_Mode;
				 Admin_Mode = 1;
				 MyForm^ MF = gcnew MyForm();
				 this->Hide();
				 MF->ShowDialog();
				 auth::Close();
				 MessageBox::Show("Вы вошли как Администратор", "Sucsess", MessageBoxButtons::OK);
			 }
}
private: System::Void Holop_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 
				 MessageBox::Show("Вы вошли как обычный пользователь", "Sucsess", MessageBoxButtons::OK);
				 MyForm^ MF = gcnew MyForm();
				 this->Hide();
				 MF->ShowDialog();
				 auth::Close();
}

};
}
