#pragma once
#include "Game.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ìåíþToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõðàíèòüÂÔàéëToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  çàãðóçèòüÈçÔàéëàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïðàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  èãðàToolStripMenuItem;

private: System::Windows::Forms::OpenFileDialog^  LoadFile;

private: System::Windows::Forms::SaveFileDialog^  SaveFile;
	private: System::Windows::Forms::TabPage^  Zapros_page;
	private: System::Windows::Forms::CheckBox^  Cost_bolshe;
	private: System::Windows::Forms::DataGridView^  dataGridView_zapros;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::CheckBox^  Prilet_do_vremeni;
	private: System::Windows::Forms::CheckBox^  Vilet_do_vremeni;
	private: System::Windows::Forms::Button^  Otchistit_zapros;
	private: System::Windows::Forms::Button^  Add_zapros;
	private: System::Windows::Forms::TextBox^  Zapros_cost;
	private: System::Windows::Forms::TextBox^  Zapros_destination;
	private: System::Windows::Forms::TextBox^  Zapros_type;
	private: System::Windows::Forms::TextBox^  Zapros_number;
	private: System::Windows::Forms::DateTimePicker^  Zapros_prilet;
	private: System::Windows::Forms::DateTimePicker^  Zapros_vilet;
	private: System::Windows::Forms::CheckedListBox^  Zapros_dni;
	private: System::Windows::Forms::CheckBox^  check_cost;
	private: System::Windows::Forms::CheckBox^  check_prilet;
	private: System::Windows::Forms::CheckBox^  check_vilet;
	private: System::Windows::Forms::CheckBox^  check_dni;
	private: System::Windows::Forms::CheckBox^  check_destination;
	private: System::Windows::Forms::CheckBox^  check_type;
	private: System::Windows::Forms::CheckBox^  Check_number;
	private: System::Windows::Forms::TabPage^  Delete_page;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView_delete;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::Button^  Delete_str;
	private: System::Windows::Forms::TextBox^  In_delete;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TabPage^  Add_page;
	private: System::Windows::Forms::Button^  Add_str;
	private: System::Windows::Forms::Button^  otchistit_vvod;
	private: System::Windows::Forms::TextBox^  In_cost;
	private: System::Windows::Forms::TextBox^  In_destination;
	private: System::Windows::Forms::TextBox^  In_type;
	private: System::Windows::Forms::TextBox^  In_number;
	private: System::Windows::Forms::CheckedListBox^  In_dni;
	private: System::Windows::Forms::DateTimePicker^  In_vilet;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  In_prilet;
	private: System::Windows::Forms::TabPage^  BD_page;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::DataGridView^  Main_dataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Index;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nomer_samoleta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type_samoleta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  destination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dni_vileta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  time_of_vilet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  time_of_prilet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cost;
	private: System::Windows::Forms::TabControl^  ypravlenie_BD;


















































































































































	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíþToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãðóçèòüÈçÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïðàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èãðàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LoadFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SaveFile = (gcnew System::Windows::Forms::SaveFileDialog());
			this->Zapros_page = (gcnew System::Windows::Forms::TabPage());
			this->Check_number = (gcnew System::Windows::Forms::CheckBox());
			this->check_type = (gcnew System::Windows::Forms::CheckBox());
			this->check_destination = (gcnew System::Windows::Forms::CheckBox());
			this->check_dni = (gcnew System::Windows::Forms::CheckBox());
			this->check_vilet = (gcnew System::Windows::Forms::CheckBox());
			this->check_prilet = (gcnew System::Windows::Forms::CheckBox());
			this->check_cost = (gcnew System::Windows::Forms::CheckBox());
			this->Zapros_dni = (gcnew System::Windows::Forms::CheckedListBox());
			this->Zapros_vilet = (gcnew System::Windows::Forms::DateTimePicker());
			this->Zapros_prilet = (gcnew System::Windows::Forms::DateTimePicker());
			this->Zapros_number = (gcnew System::Windows::Forms::TextBox());
			this->Zapros_type = (gcnew System::Windows::Forms::TextBox());
			this->Zapros_destination = (gcnew System::Windows::Forms::TextBox());
			this->Zapros_cost = (gcnew System::Windows::Forms::TextBox());
			this->Add_zapros = (gcnew System::Windows::Forms::Button());
			this->Otchistit_zapros = (gcnew System::Windows::Forms::Button());
			this->Vilet_do_vremeni = (gcnew System::Windows::Forms::CheckBox());
			this->Prilet_do_vremeni = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView_zapros = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cost_bolshe = (gcnew System::Windows::Forms::CheckBox());
			this->Delete_page = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->In_delete = (gcnew System::Windows::Forms::TextBox());
			this->Delete_str = (gcnew System::Windows::Forms::Button());
			this->dataGridView_delete = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Add_page = (gcnew System::Windows::Forms::TabPage());
			this->In_prilet = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->In_vilet = (gcnew System::Windows::Forms::DateTimePicker());
			this->In_dni = (gcnew System::Windows::Forms::CheckedListBox());
			this->In_number = (gcnew System::Windows::Forms::TextBox());
			this->In_type = (gcnew System::Windows::Forms::TextBox());
			this->In_destination = (gcnew System::Windows::Forms::TextBox());
			this->In_cost = (gcnew System::Windows::Forms::TextBox());
			this->otchistit_vvod = (gcnew System::Windows::Forms::Button());
			this->Add_str = (gcnew System::Windows::Forms::Button());
			this->BD_page = (gcnew System::Windows::Forms::TabPage());
			this->Main_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->time_of_prilet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->time_of_vilet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dni_vileta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->destination = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type_samoleta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nomer_samoleta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Index = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->ypravlenie_BD = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1->SuspendLayout();
			this->Zapros_page->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_zapros))->BeginInit();
			this->Delete_page->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_delete))->BeginInit();
			this->Add_page->SuspendLayout();
			this->BD_page->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Main_dataGridView))->BeginInit();
			this->ypravlenie_BD->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ìåíþToolStripMenuItem,
					this->ñïðàâêàToolStripMenuItem, this->èãðàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(846, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíþToolStripMenuItem
			// 
			this->ìåíþToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñîõðàíèòüÂÔàéëToolStripMenuItem,
					this->çàãðóçèòüÈçÔàéëàToolStripMenuItem
			});
			this->ìåíþToolStripMenuItem->Name = L"ìåíþToolStripMenuItem";
			this->ìåíþToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ìåíþToolStripMenuItem->Text = L"Ìåíþ";
			this->ìåíþToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ìåíþToolStripMenuItem_Click);
			// 
			// ñîõðàíèòüÂÔàéëToolStripMenuItem
			// 
			this->ñîõðàíèòüÂÔàéëToolStripMenuItem->Name = L"ñîõðàíèòüÂÔàéëToolStripMenuItem";
			this->ñîõðàíèòüÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->ñîõðàíèòüÂÔàéëToolStripMenuItem->Text = L"Ñîõðàíèòü â ôàéë";
			this->ñîõðàíèòüÂÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõðàíèòüÂÔàéëToolStripMenuItem_Click);
			// 
			// çàãðóçèòüÈçÔàéëàToolStripMenuItem
			// 
			this->çàãðóçèòüÈçÔàéëàToolStripMenuItem->Name = L"çàãðóçèòüÈçÔàéëàToolStripMenuItem";
			this->çàãðóçèòüÈçÔàéëàToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->çàãðóçèòüÈçÔàéëàToolStripMenuItem->Text = L"Çàãðóçèòü èç ôàéëà";
			this->çàãðóçèòüÈçÔàéëàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàãðóçèòüÈçÔàéëàToolStripMenuItem_Click);
			// 
			// ñïðàâêàToolStripMenuItem
			// 
			this->ñïðàâêàToolStripMenuItem->Name = L"ñïðàâêàToolStripMenuItem";
			this->ñïðàâêàToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ñïðàâêàToolStripMenuItem->Text = L"Ñïðàâêà";
			this->ñïðàâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñïðàâêàToolStripMenuItem_Click);
			// 
			// èãðàToolStripMenuItem
			// 
			this->èãðàToolStripMenuItem->Name = L"èãðàToolStripMenuItem";
			this->èãðàToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->èãðàToolStripMenuItem->Text = L"Èãðà";
			this->èãðàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::èãðàToolStripMenuItem_Click);
			// 
			// LoadFile
			// 
			this->LoadFile->FileName = L"open_File";
			// 
			// Zapros_page
			// 
			this->Zapros_page->BackColor = System::Drawing::Color::FloralWhite;
			this->Zapros_page->Controls->Add(this->Cost_bolshe);
			this->Zapros_page->Controls->Add(this->dataGridView_zapros);
			this->Zapros_page->Controls->Add(this->Prilet_do_vremeni);
			this->Zapros_page->Controls->Add(this->Vilet_do_vremeni);
			this->Zapros_page->Controls->Add(this->Otchistit_zapros);
			this->Zapros_page->Controls->Add(this->Add_zapros);
			this->Zapros_page->Controls->Add(this->Zapros_cost);
			this->Zapros_page->Controls->Add(this->Zapros_destination);
			this->Zapros_page->Controls->Add(this->Zapros_type);
			this->Zapros_page->Controls->Add(this->Zapros_number);
			this->Zapros_page->Controls->Add(this->Zapros_prilet);
			this->Zapros_page->Controls->Add(this->Zapros_vilet);
			this->Zapros_page->Controls->Add(this->Zapros_dni);
			this->Zapros_page->Controls->Add(this->check_cost);
			this->Zapros_page->Controls->Add(this->check_prilet);
			this->Zapros_page->Controls->Add(this->check_vilet);
			this->Zapros_page->Controls->Add(this->check_dni);
			this->Zapros_page->Controls->Add(this->check_destination);
			this->Zapros_page->Controls->Add(this->check_type);
			this->Zapros_page->Controls->Add(this->Check_number);
			this->Zapros_page->Enabled = false;
			this->Zapros_page->Location = System::Drawing::Point(4, 22);
			this->Zapros_page->Name = L"Zapros_page";
			this->Zapros_page->Size = System::Drawing::Size(838, 433);
			this->Zapros_page->TabIndex = 3;
			this->Zapros_page->Text = L"Çàïðîñ";
			// 
			// Check_number
			// 
			this->Check_number->AutoSize = true;
			this->Check_number->Location = System::Drawing::Point(0, 15);
			this->Check_number->Name = L"Check_number";
			this->Check_number->Size = System::Drawing::Size(93, 17);
			this->Check_number->TabIndex = 3;
			this->Check_number->Text = L"Íîìåð ðåéñà";
			this->Check_number->UseVisualStyleBackColor = true;
			this->Check_number->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Check_number_CheckedChanged);
			// 
			// check_type
			// 
			this->check_type->AutoSize = true;
			this->check_type->Location = System::Drawing::Point(120, 15);
			this->check_type->Name = L"check_type";
			this->check_type->Size = System::Drawing::Size(97, 17);
			this->check_type->TabIndex = 4;
			this->check_type->Text = L"Òèï ñàìîë¸òà";
			this->check_type->UseVisualStyleBackColor = true;
			this->check_type->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check_type_CheckedChanged);
			// 
			// check_destination
			// 
			this->check_destination->Location = System::Drawing::Point(237, 6);
			this->check_destination->Name = L"check_destination";
			this->check_destination->Size = System::Drawing::Size(104, 35);
			this->check_destination->TabIndex = 6;
			this->check_destination->Text = L"Ìåñòî íàçíà÷åíèÿ";
			this->check_destination->UseVisualStyleBackColor = true;
			this->check_destination->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check_destination_CheckedChanged);
			// 
			// check_dni
			// 
			this->check_dni->AutoSize = true;
			this->check_dni->Location = System::Drawing::Point(359, 15);
			this->check_dni->Name = L"check_dni";
			this->check_dni->Size = System::Drawing::Size(87, 17);
			this->check_dni->TabIndex = 7;
			this->check_dni->Text = L"Äíè âûëåòà";
			this->check_dni->UseVisualStyleBackColor = true;
			this->check_dni->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check_dni_CheckedChanged);
			// 
			// check_vilet
			// 
			this->check_vilet->AutoSize = true;
			this->check_vilet->Location = System::Drawing::Point(477, 15);
			this->check_vilet->Name = L"check_vilet";
			this->check_vilet->Size = System::Drawing::Size(99, 17);
			this->check_vilet->TabIndex = 8;
			this->check_vilet->Text = L"Âðåìÿ âûëåòà";
			this->check_vilet->UseVisualStyleBackColor = true;
			this->check_vilet->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check_vilet_CheckedChanged);
			// 
			// check_prilet
			// 
			this->check_prilet->AutoSize = true;
			this->check_prilet->Location = System::Drawing::Point(597, 15);
			this->check_prilet->Name = L"check_prilet";
			this->check_prilet->Size = System::Drawing::Size(103, 17);
			this->check_prilet->TabIndex = 9;
			this->check_prilet->Text = L"Âðåìÿ ïðèë¸òà";
			this->check_prilet->UseVisualStyleBackColor = true;
			this->check_prilet->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check_prilet_CheckedChanged);
			// 
			// check_cost
			// 
			this->check_cost->AutoSize = true;
			this->check_cost->Location = System::Drawing::Point(716, 15);
			this->check_cost->Name = L"check_cost";
			this->check_cost->Size = System::Drawing::Size(52, 17);
			this->check_cost->TabIndex = 10;
			this->check_cost->Text = L"Öåíà";
			this->check_cost->UseVisualStyleBackColor = true;
			this->check_cost->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check_cost_CheckedChanged);
			// 
			// Zapros_dni
			// 
			this->Zapros_dni->BackColor = System::Drawing::Color::FloralWhite;
			this->Zapros_dni->CheckOnClick = true;
			this->Zapros_dni->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"Ïí", L"Âò", L"Ñð", L"×ò", L"Ïò", L"Ñá", L"Âñ" });
			this->Zapros_dni->Location = System::Drawing::Point(359, 47);
			this->Zapros_dni->Name = L"Zapros_dni";
			this->Zapros_dni->Size = System::Drawing::Size(49, 109);
			this->Zapros_dni->TabIndex = 11;
			this->Zapros_dni->Visible = false;
			this->Zapros_dni->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::Zapros_dni_ItemCheck);
			// 
			// Zapros_vilet
			// 
			this->Zapros_vilet->CustomFormat = L"HH:mm";
			this->Zapros_vilet->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Zapros_vilet->Location = System::Drawing::Point(477, 47);
			this->Zapros_vilet->Name = L"Zapros_vilet";
			this->Zapros_vilet->ShowUpDown = true;
			this->Zapros_vilet->Size = System::Drawing::Size(56, 20);
			this->Zapros_vilet->TabIndex = 15;
			this->Zapros_vilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			this->Zapros_vilet->Visible = false;
			this->Zapros_vilet->ValueChanged += gcnew System::EventHandler(this, &MyForm::Zapros_vilet_ValueChanged);
			// 
			// Zapros_prilet
			// 
			this->Zapros_prilet->CustomFormat = L"HH:mm";
			this->Zapros_prilet->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Zapros_prilet->Location = System::Drawing::Point(597, 47);
			this->Zapros_prilet->Name = L"Zapros_prilet";
			this->Zapros_prilet->ShowUpDown = true;
			this->Zapros_prilet->Size = System::Drawing::Size(56, 20);
			this->Zapros_prilet->TabIndex = 16;
			this->Zapros_prilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			this->Zapros_prilet->Visible = false;
			this->Zapros_prilet->ValueChanged += gcnew System::EventHandler(this, &MyForm::Zapros_prilet_ValueChanged);
			// 
			// Zapros_number
			// 
			this->Zapros_number->Location = System::Drawing::Point(0, 47);
			this->Zapros_number->Name = L"Zapros_number";
			this->Zapros_number->Size = System::Drawing::Size(100, 20);
			this->Zapros_number->TabIndex = 17;
			this->Zapros_number->Visible = false;
			this->Zapros_number->TextChanged += gcnew System::EventHandler(this, &MyForm::Zapros_number_TextChanged);
			this->Zapros_number->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Zapros_number_KeyPress);
			// 
			// Zapros_type
			// 
			this->Zapros_type->Location = System::Drawing::Point(120, 47);
			this->Zapros_type->Name = L"Zapros_type";
			this->Zapros_type->Size = System::Drawing::Size(100, 20);
			this->Zapros_type->TabIndex = 18;
			this->Zapros_type->Visible = false;
			this->Zapros_type->TextChanged += gcnew System::EventHandler(this, &MyForm::Zapros_type_TextChanged);
			// 
			// Zapros_destination
			// 
			this->Zapros_destination->Location = System::Drawing::Point(237, 47);
			this->Zapros_destination->Name = L"Zapros_destination";
			this->Zapros_destination->Size = System::Drawing::Size(100, 20);
			this->Zapros_destination->TabIndex = 19;
			this->Zapros_destination->Visible = false;
			this->Zapros_destination->TextChanged += gcnew System::EventHandler(this, &MyForm::Zapros_destination_TextChanged);
			this->Zapros_destination->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Zapros_destination_KeyPress);
			// 
			// Zapros_cost
			// 
			this->Zapros_cost->Location = System::Drawing::Point(716, 47);
			this->Zapros_cost->Name = L"Zapros_cost";
			this->Zapros_cost->Size = System::Drawing::Size(100, 20);
			this->Zapros_cost->TabIndex = 20;
			this->Zapros_cost->Visible = false;
			this->Zapros_cost->Click += gcnew System::EventHandler(this, &MyForm::Zapros_cost_Click);
			this->Zapros_cost->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Zapros_cost_KeyPress);
			// 
			// Add_zapros
			// 
			this->Add_zapros->BackColor = System::Drawing::Color::LightGreen;
			this->Add_zapros->Location = System::Drawing::Point(730, 191);
			this->Add_zapros->Name = L"Add_zapros";
			this->Add_zapros->Size = System::Drawing::Size(100, 24);
			this->Add_zapros->TabIndex = 21;
			this->Add_zapros->Text = L"Çàïðîñ";
			this->Add_zapros->UseVisualStyleBackColor = false;
			this->Add_zapros->Click += gcnew System::EventHandler(this, &MyForm::Add_zapros_Click);
			// 
			// Otchistit_zapros
			// 
			this->Otchistit_zapros->BackColor = System::Drawing::Color::LightCoral;
			this->Otchistit_zapros->Location = System::Drawing::Point(8, 191);
			this->Otchistit_zapros->Name = L"Otchistit_zapros";
			this->Otchistit_zapros->Size = System::Drawing::Size(100, 24);
			this->Otchistit_zapros->TabIndex = 22;
			this->Otchistit_zapros->Text = L"Î÷èñòèòü";
			this->Otchistit_zapros->UseVisualStyleBackColor = false;
			this->Otchistit_zapros->Click += gcnew System::EventHandler(this, &MyForm::Otchistit_zapros_Click);
			// 
			// Vilet_do_vremeni
			// 
			this->Vilet_do_vremeni->Location = System::Drawing::Point(477, 83);
			this->Vilet_do_vremeni->Name = L"Vilet_do_vremeni";
			this->Vilet_do_vremeni->Size = System::Drawing::Size(81, 43);
			this->Vilet_do_vremeni->TabIndex = 23;
			this->Vilet_do_vremeni->Text = L"Ïîçæå çàäàííîãî";
			this->Vilet_do_vremeni->UseVisualStyleBackColor = true;
			this->Vilet_do_vremeni->Visible = false;
			this->Vilet_do_vremeni->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Vilet_do_vremeni_CheckedChanged);
			// 
			// Prilet_do_vremeni
			// 
			this->Prilet_do_vremeni->Location = System::Drawing::Point(597, 83);
			this->Prilet_do_vremeni->Name = L"Prilet_do_vremeni";
			this->Prilet_do_vremeni->Size = System::Drawing::Size(81, 43);
			this->Prilet_do_vremeni->TabIndex = 24;
			this->Prilet_do_vremeni->Text = L"Ïîçæå çàäàííîãî";
			this->Prilet_do_vremeni->UseVisualStyleBackColor = true;
			this->Prilet_do_vremeni->Visible = false;
			this->Prilet_do_vremeni->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Prilet_do_vremeni_CheckedChanged);
			// 
			// dataGridView_zapros
			// 
			this->dataGridView_zapros->AllowUserToAddRows = false;
			this->dataGridView_zapros->AllowUserToDeleteRows = false;
			this->dataGridView_zapros->AllowUserToResizeColumns = false;
			this->dataGridView_zapros->AllowUserToResizeRows = false;
			this->dataGridView_zapros->BackgroundColor = System::Drawing::Color::FloralWhite;
			this->dataGridView_zapros->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView_zapros->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_zapros->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_zapros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_zapros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12,
					this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn16
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Khaki;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_zapros->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView_zapros->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView_zapros->EnableHeadersVisualStyles = false;
			this->dataGridView_zapros->GridColor = System::Drawing::Color::Black;
			this->dataGridView_zapros->Location = System::Drawing::Point(0, 221);
			this->dataGridView_zapros->Name = L"dataGridView_zapros";
			this->dataGridView_zapros->ReadOnly = true;
			this->dataGridView_zapros->RowHeadersVisible = false;
			this->dataGridView_zapros->RowHeadersWidth = 30;
			this->dataGridView_zapros->Size = System::Drawing::Size(838, 212);
			this->dataGridView_zapros->TabIndex = 25;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn16->FillWeight = 101.0053F;
			this->dataGridViewTextBoxColumn16->HeaderText = L"Öåíà";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->ReadOnly = true;
			this->dataGridViewTextBoxColumn16->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn14->FillWeight = 101.0053F;
			this->dataGridViewTextBoxColumn14->HeaderText = L"Âðåìÿ ïðèë¸òà";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			this->dataGridViewTextBoxColumn14->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn13->FillWeight = 101.0053F;
			this->dataGridViewTextBoxColumn13->HeaderText = L"Âðåìÿ âûëåòà";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn12->FillWeight = 113.7738F;
			this->dataGridViewTextBoxColumn12->HeaderText = L"Äíè âûëåòà";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn11->FillWeight = 167.6647F;
			this->dataGridViewTextBoxColumn11->HeaderText = L"Ìåñòî íàçíà÷åíèÿ";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn10->FillWeight = 55.74001F;
			this->dataGridViewTextBoxColumn10->HeaderText = L"Òèï ñàìîë¸òà";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn9->FillWeight = 59.80576F;
			this->dataGridViewTextBoxColumn9->HeaderText = L"Íîìåð ðåéñà";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"###";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->dataGridViewTextBoxColumn8->Width = 30;
			// 
			// Cost_bolshe
			// 
			this->Cost_bolshe->Location = System::Drawing::Point(716, 83);
			this->Cost_bolshe->Name = L"Cost_bolshe";
			this->Cost_bolshe->Size = System::Drawing::Size(81, 43);
			this->Cost_bolshe->TabIndex = 26;
			this->Cost_bolshe->Text = L"Äîðîæå óêàçàííîé";
			this->Cost_bolshe->UseVisualStyleBackColor = true;
			this->Cost_bolshe->Visible = false;
			this->Cost_bolshe->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Cost_bolshe_CheckedChanged);
			// 
			// Delete_page
			// 
			this->Delete_page->BackColor = System::Drawing::Color::FloralWhite;
			this->Delete_page->Controls->Add(this->button1);
			this->Delete_page->Controls->Add(this->dataGridView_delete);
			this->Delete_page->Controls->Add(this->Delete_str);
			this->Delete_page->Controls->Add(this->In_delete);
			this->Delete_page->Controls->Add(this->label8);
			this->Delete_page->Enabled = false;
			this->Delete_page->Location = System::Drawing::Point(4, 22);
			this->Delete_page->Name = L"Delete_page";
			this->Delete_page->Size = System::Drawing::Size(838, 433);
			this->Delete_page->TabIndex = 2;
			this->Delete_page->Text = L"Óäàëåíèå ñòðîêè";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(8, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(221, 15);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Ââåäèòå íîìåð ñòðîêè äëÿ óäàëåíèÿ";
			// 
			// In_delete
			// 
			this->In_delete->Location = System::Drawing::Point(256, 25);
			this->In_delete->Name = L"In_delete";
			this->In_delete->Size = System::Drawing::Size(47, 20);
			this->In_delete->TabIndex = 3;
			this->In_delete->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::In_delete_KeyPress);
			// 
			// Delete_str
			// 
			this->Delete_str->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Delete_str->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Delete_str->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete_str->ForeColor = System::Drawing::Color::Black;
			this->Delete_str->Location = System::Drawing::Point(344, 23);
			this->Delete_str->Name = L"Delete_str";
			this->Delete_str->Size = System::Drawing::Size(76, 23);
			this->Delete_str->TabIndex = 4;
			this->Delete_str->Text = L"Óäàëèòü";
			this->Delete_str->UseVisualStyleBackColor = false;
			this->Delete_str->Click += gcnew System::EventHandler(this, &MyForm::Delete_str_Click);
			// 
			// dataGridView_delete
			// 
			this->dataGridView_delete->AllowUserToAddRows = false;
			this->dataGridView_delete->AllowUserToDeleteRows = false;
			this->dataGridView_delete->AllowUserToResizeColumns = false;
			this->dataGridView_delete->AllowUserToResizeRows = false;
			this->dataGridView_delete->BackgroundColor = System::Drawing::Color::FloralWhite;
			this->dataGridView_delete->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView_delete->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_delete->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView_delete->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_delete->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn15
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Khaki;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_delete->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView_delete->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView_delete->EnableHeadersVisualStyles = false;
			this->dataGridView_delete->GridColor = System::Drawing::Color::Black;
			this->dataGridView_delete->Location = System::Drawing::Point(0, 85);
			this->dataGridView_delete->Name = L"dataGridView_delete";
			this->dataGridView_delete->ReadOnly = true;
			this->dataGridView_delete->RowHeadersVisible = false;
			this->dataGridView_delete->RowHeadersWidth = 30;
			this->dataGridView_delete->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_delete->Size = System::Drawing::Size(838, 348);
			this->dataGridView_delete->TabIndex = 5;
			this->dataGridView_delete->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView_delete_CellClick);
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn15->FillWeight = 101.0053F;
			this->dataGridViewTextBoxColumn15->HeaderText = L"Öåíà";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn7->FillWeight = 101.0053F;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Âðåìÿ ïðèë¸òà";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn6->FillWeight = 101.0053F;
			this->dataGridViewTextBoxColumn6->HeaderText = L"Âðåìÿ âûëåòà";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn5->FillWeight = 113.7738F;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Äíè âûëåòà";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->FillWeight = 167.6647F;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Ìåñòî íàçíà÷åíèÿ";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->FillWeight = 55.74001F;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Òèï ñàìîë¸òà";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->FillWeight = 59.80576F;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Íîìåð ðåéñà";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"###";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->dataGridViewTextBoxColumn1->Width = 30;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(709, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 22);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Óäàëèòü âñå ñòðîêè";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Add_page
			// 
			this->Add_page->BackColor = System::Drawing::Color::FloralWhite;
			this->Add_page->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Add_page->Controls->Add(this->Add_str);
			this->Add_page->Controls->Add(this->otchistit_vvod);
			this->Add_page->Controls->Add(this->In_cost);
			this->Add_page->Controls->Add(this->In_destination);
			this->Add_page->Controls->Add(this->In_type);
			this->Add_page->Controls->Add(this->In_number);
			this->Add_page->Controls->Add(this->In_dni);
			this->Add_page->Controls->Add(this->In_vilet);
			this->Add_page->Controls->Add(this->label7);
			this->Add_page->Controls->Add(this->label6);
			this->Add_page->Controls->Add(this->label5);
			this->Add_page->Controls->Add(this->label4);
			this->Add_page->Controls->Add(this->label3);
			this->Add_page->Controls->Add(this->label2);
			this->Add_page->Controls->Add(this->label1);
			this->Add_page->Controls->Add(this->In_prilet);
			this->Add_page->Location = System::Drawing::Point(4, 22);
			this->Add_page->Name = L"Add_page";
			this->Add_page->Padding = System::Windows::Forms::Padding(3);
			this->Add_page->Size = System::Drawing::Size(838, 433);
			this->Add_page->TabIndex = 1;
			this->Add_page->Text = L"Äîáàâèòü ñòðîêó";
			// 
			// In_prilet
			// 
			this->In_prilet->CustomFormat = L"HH:mm";
			this->In_prilet->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->In_prilet->Location = System::Drawing::Point(143, 280);
			this->In_prilet->Name = L"In_prilet";
			this->In_prilet->ShowUpDown = true;
			this->In_prilet->Size = System::Drawing::Size(56, 20);
			this->In_prilet->TabIndex = 1;
			this->In_prilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Íîìåð ðåéñà";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Òèï ñàìîë¸òà";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ìåñòî íàçíà÷åíèÿ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 15);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Äíè âûëåòà";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 15);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Âðåìÿ âûëåòà";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 15);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Âðåìÿ ïðèë¸òà";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 314);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 15);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Öåíà áèëåòà";
			// 
			// In_vilet
			// 
			this->In_vilet->CustomFormat = L"HH:mm";
			this->In_vilet->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->In_vilet->Location = System::Drawing::Point(143, 247);
			this->In_vilet->Name = L"In_vilet";
			this->In_vilet->ShowUpDown = true;
			this->In_vilet->Size = System::Drawing::Size(56, 20);
			this->In_vilet->TabIndex = 14;
			this->In_vilet->Value = System::DateTime(2019, 6, 19, 0, 0, 0, 0);
			// 
			// In_dni
			// 
			this->In_dni->CheckOnClick = true;
			this->In_dni->FormattingEnabled = true;
			this->In_dni->ImeMode = System::Windows::Forms::ImeMode::On;
			this->In_dni->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"Ïí", L"Âò", L"Ñð", L"×ò", L"Ïò", L"Ñá", L"Âñ" });
			this->In_dni->Location = System::Drawing::Point(143, 127);
			this->In_dni->Name = L"In_dni";
			this->In_dni->Size = System::Drawing::Size(56, 109);
			this->In_dni->TabIndex = 15;
			// 
			// In_number
			// 
			this->In_number->Location = System::Drawing::Point(143, 30);
			this->In_number->Name = L"In_number";
			this->In_number->Size = System::Drawing::Size(202, 20);
			this->In_number->TabIndex = 9;
			this->In_number->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::In_number_KeyPress);
			// 
			// In_type
			// 
			this->In_type->Location = System::Drawing::Point(143, 66);
			this->In_type->Name = L"In_type";
			this->In_type->Size = System::Drawing::Size(202, 20);
			this->In_type->TabIndex = 10;
			// 
			// In_destination
			// 
			this->In_destination->Location = System::Drawing::Point(143, 101);
			this->In_destination->Name = L"In_destination";
			this->In_destination->Size = System::Drawing::Size(202, 20);
			this->In_destination->TabIndex = 11;
			this->In_destination->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::In_destination_KeyPress);
			// 
			// In_cost
			// 
			this->In_cost->Location = System::Drawing::Point(143, 314);
			this->In_cost->Name = L"In_cost";
			this->In_cost->Size = System::Drawing::Size(202, 20);
			this->In_cost->TabIndex = 16;
			this->In_cost->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::In_cost_KeyPress);
			// 
			// otchistit_vvod
			// 
			this->otchistit_vvod->BackColor = System::Drawing::Color::LightCoral;
			this->otchistit_vvod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->otchistit_vvod->ForeColor = System::Drawing::Color::Black;
			this->otchistit_vvod->Location = System::Drawing::Point(9, 350);
			this->otchistit_vvod->Name = L"otchistit_vvod";
			this->otchistit_vvod->Size = System::Drawing::Size(112, 23);
			this->otchistit_vvod->TabIndex = 17;
			this->otchistit_vvod->Text = L"Î÷èñòèòü";
			this->otchistit_vvod->UseVisualStyleBackColor = false;
			this->otchistit_vvod->Click += gcnew System::EventHandler(this, &MyForm::otchistit_vvod_Click);
			// 
			// Add_str
			// 
			this->Add_str->BackColor = System::Drawing::Color::LightGreen;
			this->Add_str->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Add_str->ForeColor = System::Drawing::Color::Black;
			this->Add_str->Location = System::Drawing::Point(233, 350);
			this->Add_str->Name = L"Add_str";
			this->Add_str->Size = System::Drawing::Size(112, 23);
			this->Add_str->TabIndex = 18;
			this->Add_str->Text = L"Äîáàâèòü ñòðîêó";
			this->Add_str->UseVisualStyleBackColor = false;
			this->Add_str->Click += gcnew System::EventHandler(this, &MyForm::Add_str_Click_1);
			// 
			// BD_page
			// 
			this->BD_page->BackColor = System::Drawing::Color::FloralWhite;
			this->BD_page->Controls->Add(this->checkBox1);
			this->BD_page->Controls->Add(this->Main_dataGridView);
			this->BD_page->Location = System::Drawing::Point(4, 22);
			this->BD_page->Name = L"BD_page";
			this->BD_page->Padding = System::Windows::Forms::Padding(3);
			this->BD_page->Size = System::Drawing::Size(838, 433);
			this->BD_page->TabIndex = 0;
			this->BD_page->Text = L"Áàçà äàííûõ";
			// 
			// Main_dataGridView
			// 
			this->Main_dataGridView->AllowUserToAddRows = false;
			this->Main_dataGridView->AllowUserToDeleteRows = false;
			this->Main_dataGridView->AllowUserToResizeColumns = false;
			this->Main_dataGridView->AllowUserToResizeRows = false;
			this->Main_dataGridView->BackgroundColor = System::Drawing::Color::FloralWhite;
			this->Main_dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Main_dataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Main_dataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->Main_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Main_dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Index,
					this->nomer_samoleta, this->type_samoleta, this->destination, this->dni_vileta, this->time_of_vilet, this->time_of_prilet, this->cost
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::Khaki;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Main_dataGridView->DefaultCellStyle = dataGridViewCellStyle6;
			this->Main_dataGridView->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Main_dataGridView->EnableHeadersVisualStyles = false;
			this->Main_dataGridView->GridColor = System::Drawing::Color::Black;
			this->Main_dataGridView->Location = System::Drawing::Point(3, 29);
			this->Main_dataGridView->MultiSelect = false;
			this->Main_dataGridView->Name = L"Main_dataGridView";
			this->Main_dataGridView->ReadOnly = true;
			this->Main_dataGridView->RowHeadersVisible = false;
			this->Main_dataGridView->RowHeadersWidth = 30;
			this->Main_dataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->Main_dataGridView->Size = System::Drawing::Size(832, 401);
			this->Main_dataGridView->TabIndex = 0;
			this->Main_dataGridView->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &MyForm::Main_dataGridView_CellFormatting);
			this->Main_dataGridView->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &MyForm::Main_dataGridView_EditingControlShowing_1);
			// 
			// cost
			// 
			this->cost->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->cost->FillWeight = 83.83238F;
			this->cost->HeaderText = L"Öåíà";
			this->cost->Name = L"cost";
			this->cost->ReadOnly = true;
			this->cost->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// time_of_prilet
			// 
			this->time_of_prilet->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->time_of_prilet->FillWeight = 102.0818F;
			this->time_of_prilet->HeaderText = L"Âðåìÿ ïðèë¸òà";
			this->time_of_prilet->Name = L"time_of_prilet";
			this->time_of_prilet->ReadOnly = true;
			this->time_of_prilet->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// time_of_vilet
			// 
			this->time_of_vilet->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->time_of_vilet->FillWeight = 102.0818F;
			this->time_of_vilet->HeaderText = L"Âðåìÿ âûëåòà";
			this->time_of_vilet->Name = L"time_of_vilet";
			this->time_of_vilet->ReadOnly = true;
			this->time_of_vilet->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// dni_vileta
			// 
			this->dni_vileta->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dni_vileta->FillWeight = 145.9078F;
			this->dni_vileta->HeaderText = L"Äíè âûëåòà";
			this->dni_vileta->Name = L"dni_vileta";
			this->dni_vileta->ReadOnly = true;
			this->dni_vileta->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// destination
			// 
			this->destination->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->destination->FillWeight = 145.4409F;
			this->destination->HeaderText = L"Ìåñòî íàçíà÷åíèÿ";
			this->destination->Name = L"destination";
			this->destination->ReadOnly = true;
			this->destination->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// type_samoleta
			// 
			this->type_samoleta->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->type_samoleta->FillWeight = 60.21256F;
			this->type_samoleta->HeaderText = L"Òèï ñàìîë¸òà";
			this->type_samoleta->Name = L"type_samoleta";
			this->type_samoleta->ReadOnly = true;
			this->type_samoleta->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// nomer_samoleta
			// 
			this->nomer_samoleta->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->nomer_samoleta->FillWeight = 60.44316F;
			this->nomer_samoleta->HeaderText = L"Íîìåð ðåéñà";
			this->nomer_samoleta->Name = L"nomer_samoleta";
			this->nomer_samoleta->ReadOnly = true;
			this->nomer_samoleta->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Index
			// 
			this->Index->HeaderText = L"###";
			this->Index->Name = L"Index";
			this->Index->ReadOnly = true;
			this->Index->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Index->Width = 30;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(691, 6);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(141, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Ðåæèì êîððåêòèðîâêè";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// ypravlenie_BD
			// 
			this->ypravlenie_BD->Controls->Add(this->BD_page);
			this->ypravlenie_BD->Controls->Add(this->Add_page);
			this->ypravlenie_BD->Controls->Add(this->Delete_page);
			this->ypravlenie_BD->Controls->Add(this->Zapros_page);
			this->ypravlenie_BD->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ypravlenie_BD->Location = System::Drawing::Point(0, 24);
			this->ypravlenie_BD->Name = L"ypravlenie_BD";
			this->ypravlenie_BD->SelectedIndex = 0;
			this->ypravlenie_BD->Size = System::Drawing::Size(846, 459);
			this->ypravlenie_BD->TabIndex = 1;
			this->ypravlenie_BD->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ypravlenie_BD_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(846, 483);
			this->Controls->Add(this->ypravlenie_BD);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(862, 522);
			this->MinimumSize = System::Drawing::Size(862, 522);
			this->Name = L"MyForm";
			this->Text = L"Áàçà äàííûõ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Zapros_page->ResumeLayout(false);
			this->Zapros_page->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_zapros))->EndInit();
			this->Delete_page->ResumeLayout(false);
			this->Delete_page->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_delete))->EndInit();
			this->Add_page->ResumeLayout(false);
			this->Add_page->PerformLayout();
			this->BD_page->ResumeLayout(false);
			this->BD_page->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Main_dataGridView))->EndInit();
			this->ypravlenie_BD->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Add_str_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::MessageBox::Show("Ðåéñ äîáàâëåí", "Îïîâåùåíèå", MessageBoxButtons::OK);
}
private: System::Void otchistit_vvod_Click(System::Object^  sender, System::EventArgs^  e) {
			 In_number->Text = "";
			 In_type->Text = "";
			 In_destination->Text = "";
			 In_cost->Text = "";
			 In_vilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			 In_prilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			 for (int i = 0; i < In_dni->Items->Count; i++)
				 In_dni->SetItemChecked(i, false);
}

private: System::Void Add_str_Click_1(System::Object^  sender, System::EventArgs^  e) {
					  
			 int flag = 1;
			 if (In_number->Text == "" || In_type->Text == "" || In_destination->Text == "" ||
				 In_dni->CheckedItems->Count == 0 || In_cost->Text == "")
			 {
				 flag = 0;
				 System::Windows::Forms::MessageBox::Show("Ïîïûòêà äîáàâëåíèÿ ïóñòîé ñòðîêè", "Error", MessageBoxButtons::OK);
			 }
			 if (flag)
			 {
				 String^ number = In_number->Text;
				 String^ type = In_type->Text;
				 String^ destination = In_destination->Text;
				 String^ dni;

				 for (int i = 0; i < In_dni->CheckedItems->Count; i++)
				 {
					 if (i == (In_dni->CheckedItems->Count - 1))
						 dni += In_dni->CheckedItems[i]->ToString();
					 else
						 dni += In_dni->CheckedItems[i]->ToString() + ",";
				 }
				 String^ vilet_time = In_vilet->Value.ToString("HH:mm");
				 String^ prilet_time = In_prilet->Value.ToString("HH:mm");
				 String^ cost = In_cost->Text;

				 System::Windows::Forms::MessageBox::Show("Âû äîáàâèëè ñòðîêó", "Sucsess", MessageBoxButtons::OK);


				 Main_dataGridView->Rows->Add((Main_dataGridView->Rows->Count + 1).ToString(), number, type, destination, dni, vilet_time, prilet_time, cost);
				 dataGridView_delete->Rows->Add((Main_dataGridView->Rows->Count + 1).ToString(), number, type, destination, dni, vilet_time, prilet_time, cost);
				 dataGridView_zapros->Rows->Add((Main_dataGridView->Rows->Count + 1).ToString(), number, type, destination, dni, vilet_time, prilet_time, cost);
				
				 if (Main_dataGridView->Rows->Count - 1 == 0)
				 {
					 Delete_page->Enabled = true;
					 Zapros_page->Enabled = true;
					 checkBox1->Enabled = true;
				 }
					  In_number->Text = "";
					  In_type->Text = "";
					  In_destination->Text = "";
					  In_cost->Text = "";
					  In_vilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
					  In_prilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
					  for (int i = 0; i < In_dni->Items->Count; i++)
						  In_dni->SetItemChecked(i, false);
			 }

		 }


		 //Ìàñêè â òåêñò áîêñàõ
private: System::Void In_delete_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //çàïðåò íà ââîä êðîìå öèôð è bsp
				 e->Handled = true;
}

private: System::Void In_number_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //çàïðåò íà ââîä êðîìå öèôð è bsp
				 e->Handled = true;
}

private: System::Void In_destination_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (!Char::IsDigit(e->KeyChar)) return; //
			 else e->Handled = true;                    // Çàïðåò íà ââîä öèôð
}

private: System::Void In_cost_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //çàïðåò íà ââîä êðîìå öèôð è bsp
				 e->Handled = true;
}

private: System::Void Zapros_number_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //çàïðåò íà ââîä êðîìå öèôð è bsp
				 e->Handled = true;
}

private: System::Void Zapros_destination_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (!Char::IsDigit(e->KeyChar)) return; //
			 else e->Handled = true;                    // Çàïðåò íà ââîä öèôð
}

private: System::Void Zapros_cost_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //çàïðåò íà ââîä êðîìå öèôð è bsp
				 e->Handled = true;
}

		 //Çàïðîñ
private: System::Void Check_number_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if(Zapros_number->Visible == false)
				Zapros_number->Visible = true;
			else
			{
				Zapros_number->Visible = false;
				Zapros_number->Text = "";
			}
			for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				dataGridView_zapros->Rows[i]->Visible = true;
}

private: System::Void check_type_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (Zapros_type->Visible == false)
				 Zapros_type->Visible = true;
			 else
			 {
				 Zapros_type->Visible = false;
				 Zapros_type->Text = "";
			 }
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}

private: System::Void check_destination_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (Zapros_destination->Visible == false)
				 Zapros_destination->Visible = true;
			 else
			 {
				 Zapros_destination->Visible = false;
				 Zapros_destination->Text = "";
			 }
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}

private: System::Void check_dni_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (Zapros_dni->Visible == false)
				 Zapros_dni->Visible = true;
			 else
			 {
				 for (int i = 0; i < In_dni->Items->Count; i++)
					 Zapros_dni->SetItemChecked(i, false);
				 Zapros_dni->Visible = false;
			 }


			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}

private: System::Void check_vilet_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (Zapros_vilet->Visible == false)
				 Zapros_vilet->Visible = true;
			 else
			 {
				 Zapros_vilet->Visible = false;
				 Zapros_vilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			 }
			 if (Vilet_do_vremeni->Visible == false)
				 Vilet_do_vremeni->Visible = true;
			 else
			 {
				 Vilet_do_vremeni->Visible = false;
				 Vilet_do_vremeni->Checked = false;
			 }
				
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}

private: System::Void check_prilet_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (Zapros_prilet->Visible == false)
				 Zapros_prilet->Visible = true;
			 else
			 {
				 Zapros_prilet->Visible = false;
				 Zapros_prilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			 }
			 if (Prilet_do_vremeni->Visible == false)
				 Prilet_do_vremeni->Visible = true;
			 else
			 {
				 Prilet_do_vremeni->Visible = false;
				 Prilet_do_vremeni->Checked = false;
			 }

			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}


private: System::Void check_cost_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (Zapros_cost->Visible == false)
			 {
				 Zapros_cost->Visible = true;
				 Cost_bolshe->Visible = true;
			 }
			 else
			 {
				 Zapros_cost->Visible = false;
				 Zapros_cost->Text = "";
				 Cost_bolshe->Visible = false;
			 }

			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}

		 //Î÷èñòêà çàïðîñà
private: System::Void Otchistit_zapros_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
			 Zapros_number->Text = "";
			 Zapros_type->Text = "";
			 Zapros_destination->Text = "";
			 Zapros_cost->Text = "";
			 Zapros_vilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			 Zapros_prilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			 Vilet_do_vremeni->Checked = false;
			 Prilet_do_vremeni->Checked = false;
			 for (int i = 0; i < Zapros_dni->Items->Count; i++)
				 Zapros_dni->SetItemChecked(i, false);
				 
}



		 //Äîáàâëåíèå çàïðîñà
private: System::Void Add_zapros_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
			 
			 int col = 0;

			 if (Check_number->Checked == true) col++;
			 if (check_type->Checked == true) col++;
			 if (check_destination->Checked == true) col++;
			 if (check_dni->Checked == true) col++;
			 if (check_vilet->Checked == true) col++;
			 if (check_prilet->Checked == true) col++;
			 if (check_cost->Checked == true) col++;
			 
			 //Ïðîâåðêà âñåõ ñòðîê
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
			 {
				 int sovp = 0;
				 //Ïðîâåðêà íîìåðà
				 if (Check_number->Checked == true)
				 {
					 if (Zapros_number->Text != "")
					 {
						 if (Convert::ToInt32(dataGridView_zapros->Rows[i]->Cells[1]->Value) == Convert::ToInt32(Zapros_number->Text))
							 sovp++;
						 else
							 goto ne_podhodit;
					 }
					 else
						 goto end_zapros;
				 }
				 //Ïðîâåðêà òèïà
				 if (check_type->Checked == true)
				 {
					 if (Zapros_type->Text != "")
					 {
						 if (dataGridView_zapros->Rows[i]->Cells[2]->Value->ToString()->ToLower() == Zapros_type->Text->ToLower())
							 sovp++;
						 else
							 goto ne_podhodit;
					 }
					 else
						 goto end_zapros;
				 }
				 //Ïðîâåðêà ìåñòà íàçíà÷åíèÿ
				 if (check_destination->Checked == true)
				 {
					 if (Zapros_destination->Text != "")
					 {
						 if (dataGridView_zapros->Rows[i]->Cells[3]->Value->ToString()->ToLower() == Zapros_destination->Text->ToLower())
							 sovp++;
						 else
							 goto ne_podhodit;
					 }
					 else
						 goto end_zapros;
				 }
				 //Ïðîâåðêà äíåé âûëåòà
				 if (check_dni->Checked == true)
				 {
					 if (Zapros_dni->CheckedItems->Count != 0)
					 {
						 int flag = 0;
						 String^ str = "";
						 for (int j = 0; j < Zapros_dni->CheckedItems->Count; j++)
						 {
							 if (j == (Zapros_dni->CheckedItems->Count - 1))
								 str += Zapros_dni->CheckedItems[j]->ToString();
							 else
								 str += Zapros_dni->CheckedItems[j]->ToString() + ",";
						 }
						 array<String^>^ dni = str->Split(',');
						 array<String^>^ dni_in_tables = dataGridView_zapros->Rows[i]->Cells[4]->Value->ToString()->Split(',');
						 for (int j = 0; j < dni->Length; j++)
						 {
							 for (int k = 0; k < dni_in_tables->Length; k++)
								 if (dni[j] == dni_in_tables[k])
								 {
									 sovp++;
									 flag = 1;
									 break;
								}
								 if (flag)
									 break;
						 }
						 if (flag == 0)
						 goto ne_podhodit;
					 }
					 else
						 goto end_zapros;
				 }
				 //Ïðîâåðêà âðåìåíè âûëåòà
				 if (check_vilet->Checked == true)
				 {
					 String^ time_zapros = Zapros_vilet->Value.ToString("HH:mm");
					 String^ time_vilet = dataGridView_zapros->Rows[i]->Cells[5]->Value->ToString();
					 array<String^>^ times_zapros = time_zapros->Split(':');
					 array<String^>^ times_vilet = time_vilet->Split(':');

					 if (Vilet_do_vremeni->Checked == true)
					 {
						 
						 if (Convert::ToInt32(times_zapros[0]) < Convert::ToInt32(times_vilet[0]))
						 {
							 sovp++;
						 }
						 else
						 {
							 if ((Convert::ToInt32(times_zapros[1]) <= Convert::ToInt32(times_vilet[1])) 
								 && (Convert::ToInt32(times_zapros[0]) == Convert::ToInt32(times_vilet[0])))
							 {
								 sovp++;
							 }
							 else
								 goto ne_podhodit;
						 }
					 }
					 else
					 {
						 if (Convert::ToInt32(times_zapros[0]) > Convert::ToInt32(times_vilet[0]))
						 {
							 sovp++;
						 }
						 else
						 {
							 if ((Convert::ToInt32(times_zapros[1]) >= Convert::ToInt32(times_vilet[1]))
								 && (Convert::ToInt32(times_zapros[0]) == Convert::ToInt32(times_vilet[0])))
							 {
								 sovp++;
							 }
							 else
								 goto ne_podhodit;
						 }
					 }
				 }
				 //Ïðîâåðêà âðåìåíè ïðèëåòà
				 if (check_prilet->Checked == true)
				 {
					 String^ time_zapros = Zapros_prilet->Value.ToString("HH:mm");
					 String^ time_prilet = dataGridView_zapros->Rows[i]->Cells[6]->Value->ToString();
					 array<String^>^ times_zapros = time_zapros->Split(':');
					 array<String^>^ times_prilet = time_prilet->Split(':');

					 if (Prilet_do_vremeni->Checked == true)
					 {

						 if (Convert::ToInt32(times_zapros[0]) < Convert::ToInt32(times_prilet[0]))
						 {
							 sovp++;
						 }
						 else
						 {
							 if ((Convert::ToInt32(times_zapros[1]) <= Convert::ToInt32(times_prilet[1]))
								 && (Convert::ToInt32(times_zapros[0]) == Convert::ToInt32(times_prilet[0])))
							 {
								 sovp++;
							 }
							 else
								 goto ne_podhodit;
						 }
					 }
					 else
					 {
						 if (Convert::ToInt32(times_zapros[0]) > Convert::ToInt32(times_prilet[0]))
						 {
							 sovp++;
						 }
						 else
						 {
							 if ((Convert::ToInt32(times_zapros[1]) >= Convert::ToInt32(times_prilet[1]))
								 && (Convert::ToInt32(times_zapros[0]) == Convert::ToInt32(times_prilet[0])))
							 {
								 sovp++;
							 }
							 else
								 goto ne_podhodit;
						 }
					 }
				 }

				 //Ïðîâåðêà öåíû
				 if (check_cost->Checked == true)
				 {
					 if (Zapros_cost->Text != "")
					 {
						 if (Cost_bolshe->Checked == true)
						 {
							 if (Convert::ToInt32(Zapros_cost->Text) <= Convert::ToInt32(dataGridView_zapros->Rows[i]->Cells[7]->Value))
								 sovp++;
							 else
								 goto ne_podhodit;
						 }
						 else
						 {
							 if (Convert::ToInt32(Zapros_cost->Text) >= Convert::ToInt32(dataGridView_zapros->Rows[i]->Cells[7]->Value))
								 sovp++;
							 else
								 goto ne_podhodit;
						 }
					 }
					 else
						 goto end_zapros;
				 }

				 if (sovp != col)
	ne_podhodit:				 dataGridView_zapros->Rows[i]->Visible = false;
			 }
			 MessageBox::Show("Çàïðîñ óñïåøíî âûïîëíåí!", "Sucsess", MessageBoxButtons::OK);
			 goto konec;


		 end_zapros:			
			 MessageBox::Show("Íå âñå ïîëÿ çàïîëíåíû!", "Error", MessageBoxButtons::OK);

		 konec:;
}

		 //Ìàñêà â òàáëèöå
private: System::Void Main_dataGridView_EditingControlShowing_1(System::Object^  sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^  e) {
			 TextBox^ tb = (System::Windows::Forms::TextBox^)e->Control;
			 tb->KeyPress -= gcnew KeyPressEventHandler(this, &MyForm::tb_KeyPress);
			 tb->KeyPress += gcnew KeyPressEventHandler(this, &MyForm::tb_KeyPress);
}


private: System::Void tb_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (Main_dataGridView->CurrentCell->OwningColumn->Name->Equals(L"nomer_samoleta"))
			 if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //çàïðåò íà ââîä êðîìå öèôð è bsp
				 e->Handled = true;
			 
			 if (Main_dataGridView->CurrentCell->OwningColumn->Name->Equals(L"destination"))
			 if (!Char::IsDigit(e->KeyChar)) return; 
			 else e->Handled = true;

			 if (Main_dataGridView->CurrentCell->OwningColumn->Name->Equals(L"dni_vileta"))
			 if ((!(e->KeyChar > 48) || !(e->KeyChar < 56)) && (!(e->KeyChar == 8)) && (!(e->KeyChar == 44))) //çàïðåò íà ââîä êðîìå öèôð è bsp
				 e->Handled = true;							
			 

			 if (Main_dataGridView->CurrentCell->OwningColumn->Name->Equals(L"cost"))
			 if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //çàïðåò íà ââîä êðîìå öèôð è bsp
				 e->Handled = true;
}

private: System::Void Main_dataGridView_CellFormatting(System::Object^  sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^  e) {
			 if (e) 
			 {
				 if (Main_dataGridView->Columns[e->ColumnIndex]->Name == L"time_of_vilet" || Main_dataGridView->Columns[e->ColumnIndex]->Name == L"time_of_prilet") {
					 if (e->Value) try 
					 {
						 e->Value = DateTime::Parse(e->Value->ToString()).ToString("HH:mm");
						 e->FormattingApplied = true;
						 Main_dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = e->Value;
					 }
					 catch (FormatException ^ex) 
					 { e->Value = "00:00"; 
					 Main_dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = e->Value; 
					 }
					 else
					 {
						 e->Value = "00:00";
						 Main_dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = e->Value;
					 }
				 }

				 if (Main_dataGridView->Columns[e->ColumnIndex]->Name == L"nomer_samoleta")
				 {
					 if (e->Value)
						 e->FormattingApplied = true;
					 else
					 {
						 e->Value = "0";
						 Main_dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = e->Value;
					 }
				 }

				 if (Main_dataGridView->Columns[e->ColumnIndex]->Name == L"type_samoleta")
				 {
					 if (e->Value)
						 e->FormattingApplied = true;
					 else
					 {
						 e->Value = "Il-86";
						 Main_dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = e->Value;
					 }
				 }

				 if (Main_dataGridView->Columns[e->ColumnIndex]->Name == L"destination")
				 {
					 if (e->Value)
						 e->FormattingApplied = true;
					 else
					 {
						 e->Value = "Ìîñêâà";
						 Main_dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = e->Value;
					 }
				 }

				 if (Main_dataGridView->Columns[e->ColumnIndex]->Name == L"cost")
				 {
					 if (e->Value)
						 e->FormattingApplied = true;
					 else
					 {
						 e->Value = "2000";
						 Main_dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = e->Value;
					 }
				 }

				 if (Main_dataGridView->Columns[e->ColumnIndex]->Name == L"dni_vileta")
				 {
					 if (e->Value)
					 {
						 int vihod = 0;
						 String^ dni_str = e->Value->ToString();
						 if ((dni_str[0] < '0' || dni_str[0] > '9') && (dni_str[0] != ','))
						 {
							 e->FormattingApplied = true;
							 goto end;
						 }
							 
						 int dni[7] = { 0, 0, 0, 0, 0, 0, 0 };
						 int col = 0;
						 array<String^>^ dni_chisla = dni_str->Split(',');
						 if (dni_chisla[0] == "" || dni_chisla[dni_chisla->Length - 1] == "")
						 {
							 vihod = 1;
							 goto vihod;
						 }
						 for (int i = 0; i < dni_chisla->Length; i++)
						 if ((Convert::ToInt32(dni_chisla[i]) <= 7) && (Convert::ToInt32(dni_chisla[i]) >= 1))
							 {
								 for (int j = 0; j < col; j++)
									 if (Convert::ToInt32(dni_chisla[i]) == dni[j])
									 {
										 vihod = 1;
										 break;
									 }
									 dni[col] = Convert::ToInt32(dni_chisla[i]);
									 col++;
							 }
							 else
							 {
								 vihod = 1;
								 break;
							 }


vihod:						if (vihod)
						{
								e->Value = "Ïí,Âò,Ñð,×ò,Ïò,Ñá,Âñ";
							e->FormattingApplied = true;
							Main_dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = e->Value;
						}
						else
						{
							for (int i = 1; i < col; i++)
							for (int j = 0; j < col - i; j++)
							if (dni[j] > dni[j + 1])
							{
								int temp = dni[j];
								dni[j] = dni[j + 1];
								dni[j + 1] = temp;
							}

							e->Value = "";

							for (int i = 0; i < col; i++)
							{
								if (dni[i] == 1)
									e->Value += "Ïí";
								if (dni[i] == 2)
									e->Value += "Âò";
								if (dni[i] == 3)
									e->Value += "Ñð";
								if (dni[i] == 4)
									e->Value += "×ò";
								if (dni[i] == 5)
									e->Value += "Ïò";
								if (dni[i] == 6)
									e->Value += "Ñá";
								if (dni[i] == 7)
									e->Value += "Âñ";

								if ((i + 1) != col)
									e->Value += ",";
							}

							e->FormattingApplied = true;
							Main_dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = e->Value;
						}
					}
					 else
					 {
						 e->Value = "Ïí,Âò,Ñð,×ò,Ïò,Ñá,Âñ";
						 Main_dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = e->Value;
					 }

				 }
			 end:;
			}
}


private: System::Void dataGridView_delete_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 In_delete->Text = (dataGridView_delete->SelectedRows[0]->Cells[0]->Value->ToString());
}
private: System::Void Delete_str_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (Convert::ToInt32(In_delete->Text) == 0)
			 {
				 System::Windows::Forms::MessageBox::Show("Ïîïûòêà óäàëåíèÿ íåñóùåñòâóþùåé ñòðîêè!", "Error", MessageBoxButtons::OK);
				 goto end_end;
			 }
			 
			 if (In_delete->Text != "" && (Convert::ToInt32(In_delete->Text) <= Main_dataGridView->Rows->Count))
			 {
				 Main_dataGridView->Rows->RemoveAt(Convert::ToInt32(In_delete->Text) - 1);
				 dataGridView_delete->Rows->RemoveAt(Convert::ToInt32(In_delete->Text) - 1);
				 dataGridView_zapros->Rows->RemoveAt(Convert::ToInt32(In_delete->Text) - 1);
				 In_delete->Text = "";
				 
				 for (int i = 0; i < Main_dataGridView->RowCount; i++)
				 {
					 Main_dataGridView->Rows[i]->Cells[0]->Value = i + 1;
					 dataGridView_delete->Rows[i]->Cells[0]->Value = i + 1;
					 dataGridView_zapros->Rows[i]->Cells[0]->Value = i + 1;
				 }

			 if (Main_dataGridView->Rows->Count == 0)
			 {
				 Delete_page->Enabled = false;
				 Zapros_page->Enabled = false;
				 checkBox1->Enabled = false;
			 }
			 }
			 else
			 {
				 In_delete->Text = "";
				 System::Windows::Forms::MessageBox::Show("Ïîïûòêà óäàëåíèÿ íåñóùåñòâóþùåé ñòðîêè!", "Error", MessageBoxButtons::OK);
			 }
		 end_end:;
				 
}
private: System::Void ñïðàâêàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::MessageBox::Show("×òîáû çàãðóçèòü/ñîõðàíèòü áàçó äàííûõ èç/â ôàéë âûáåðèòå ïóíêò Ìåíþ->Çàãðóçèòü/Ñîõðàíèòü."+"\n\n"+
				 "×òîáû äîáàâèòü ñòðîêó, ïåðåéäèòå âî âêëàäêó Äîáàâèòü ñòðîêó, çàïîëíèòå âñå ïîëÿ è íàæìèòå êíîïêó Äîáàâèòü ñòðîêó."+"\n\n"+"×òîáû óäàëèòü ñòðîêó,"+
				 " ïåðåéäèòå íà âêëàäêó Óäàëèòü ñòðîêó è ââåäèòå èíäåêñ ñòðîêè, êîòîðóþ õîòèòå óäàëèòü, èëè ïðîñòî âûáåðèòå íóæíóþ ñòðîêó ùåë÷êîì ËÊÌ ïî íåé, è íàæìèòå êíîïêó Óäàëèòü ñòðîêó."+"\n\n"+
				 "×òîáû èçìåíèòü îòäåëüíîå ïîëå, íà ñòðàíèöå Áàçà Äàííûõ âîéäèòå â ðåæèì ðåäàêòèðîâàíèÿ. ×òîáû èçìåíèòü ïîëå â ñòîëáöå Äíè âûëåòà, íóæíî ïåðå÷èñëèòü äíè íåäåëè â ôîðìàòå öèôð ÷åðåç çàïÿòóþ ()."
				 +"(1 - Ïí, 2 - Âò, 3 - Ñð, 4 - ×ò, 5 - Ïò, 6 - Ñá, 7 - Âñ)."+"\n\n"+"×òîáû ñäåëàòü çàïðîñ, ïåðåéäèòå íà ñòðàíèöó Çàïðîñ, âûáåðèòå, ïî êàêèì ïîëÿì âû õîòèòå ñäåëàòü çàïðîñ, "+
				 "ââåäèòå èíòåðåñóåìûå äàííûå, è íàæìèòå íà êíîïêó Çàïðîñ.", "Info", MessageBoxButtons::OK);
}
private: System::Void ñîõðàíèòüÂÔàéëToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 Stream^ myStream = nullptr;
			 SaveFile->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			 SaveFile->FilterIndex = 2;
			 SaveFile->RestoreDirectory = true;
			 Main_dataGridView->AllowUserToAddRows = true;

			 if (SaveFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 if ((myStream = SaveFile->OpenFile()) != nullptr)
				 {
					 System::IO::StreamWriter^ myWritet = gcnew System::IO::StreamWriter(myStream);
					 try
					 {
						 for (int i = 0; i < Main_dataGridView->RowCount - 1; i++)
						 {
							 for (int j = 0; j < Main_dataGridView->ColumnCount - 1; j++)
							 {
								 myWritet->Write(Main_dataGridView->Rows[i]->Cells[j + 1]->Value->ToString() + " ");
							 }
							 if (i + 2 < Main_dataGridView->RowCount)
								 myWritet->WriteLine();
						 }

					 }
					 catch (Exception^ ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 myWritet->Close();
					 }

					 myStream->Close();
				 }
			 }
			 Main_dataGridView->AllowUserToAddRows = false;
}

private: System::Void çàãðóçèòüÈçÔàéëàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 Main_dataGridView->Rows->Clear();
			 dataGridView_delete->Rows->Clear(); 
			 dataGridView_zapros->Rows->Clear();
			 
			 if (Delete_page->Enabled == true)
			 {
				 Delete_page->Enabled = false;
				 Zapros_page->Enabled = false;
				 checkBox1->Enabled = false;
			 }

			 
			 Stream^ my_str = nullptr;
			 if (LoadFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 if ((my_str = LoadFile->OpenFile()) != nullptr)
				 {
					 System::IO::StreamReader^ my_read = gcnew System::IO::StreamReader(my_str);
					 array<String^>^ str;
					 int num = 0;
					 try{
						 array<String^>^ str1 =  my_read->ReadToEnd()->Split('\n');
						 num = str1->Length;
						 Main_dataGridView->RowCount = num;
						 for (int i = 0; i < num; i++)
						 {
							 str = str1[i]->Split(' ');
							 for (int j = 1; j < Main_dataGridView->ColumnCount; j++)
							 {
								 try
								 {
									 Main_dataGridView->Rows[i]->Cells[j]->Value = str[j - 1];
								 }
								 catch (Exception^) {}
							 }
							 Main_dataGridView->Rows[i]->Cells[0]->Value = i + 1;
						 }
					 }
					 catch (Exception^ ex){
						 System::Windows::Forms::MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 my_read->Close();
					 }
				 }
			 }

			 if (Main_dataGridView->RowCount != 0)
			 {
				 Delete_page->Enabled = true;
				 Zapros_page->Enabled = true;
				 checkBox1->Enabled = true;

				 for (int i = 0; i < Main_dataGridView->RowCount; i++)
				 {
					 dataGridView_delete->Rows->Add();
					 dataGridView_zapros->Rows->Add();

					 for (int j = 0; j < Main_dataGridView->ColumnCount; j++)
					 {
						 dataGridView_delete->Rows[i]->Cells[j]->Value = Main_dataGridView->Rows[i]->Cells[j]->Value;
						 dataGridView_zapros->Rows[i]->Cells[j]->Value = Main_dataGridView->Rows[i]->Cells[j]->Value;
					 }
				 }
			 }
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked == true)
			 {
				 Main_dataGridView->ReadOnly = false;
				 Main_dataGridView->Columns[0]->ReadOnly = true;
			 }
			 else
			 {
				 Main_dataGridView->ReadOnly = true;
				 for (int i = 0; i < Main_dataGridView->RowCount; i++)
				 {
					 for (int j = 0; j < Main_dataGridView->ColumnCount; j++)
					 {
						 dataGridView_delete->Rows[i]->Cells[j]->Value = Main_dataGridView->Rows[i]->Cells[j]->Value;
						 dataGridView_zapros->Rows[i]->Cells[j]->Value = Main_dataGridView->Rows[i]->Cells[j]->Value;
					 }
				 }
			 }
}

private: System::Void ypravlenie_BD_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (checkBox1->Checked == true)
			 {
				 checkBox1->Checked = false;
				 Main_dataGridView->ReadOnly = true;
			 }

			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;

			 Check_number->Checked = false;
			 check_type->Checked = false;
			 check_destination->Checked = false;
			 check_dni->Checked = false;
			 check_vilet->Checked = false;
			 check_prilet->Checked = false;
			 check_cost->Checked = false;

			 Zapros_number->Text = "";
			 Zapros_type->Text = "";
			 Zapros_destination->Text = "";
			 Zapros_cost->Text = "";
			 Zapros_vilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			 Zapros_prilet->Value = System::DateTime(2019, 6, 17, 0, 0, 0, 0);
			 Vilet_do_vremeni->Checked = false;
			 Prilet_do_vremeni->Checked = false;
			 Cost_bolshe->Checked = false;
			 for (int i = 0; i < Zapros_dni->Items->Count; i++)
				 Zapros_dni->SetItemChecked(i, false);
			 
			 Zapros_number->Visible = false;
			 Zapros_type->Visible = false;
			 Zapros_destination->Visible = false;
			 Zapros_dni->Visible = false;
			 Zapros_vilet->Visible = false;
			 Zapros_prilet->Visible = false;
			 Zapros_cost->Visible = false;
			 Cost_bolshe->Visible = false;
			 Vilet_do_vremeni->Visible = false;
			 Prilet_do_vremeni->Visible = false;

}
                                 //Èãðà//
private: System::Void èãðàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked == true)
			 {
				 checkBox1->Checked = false;
				 Main_dataGridView->ReadOnly = true;
			 }
			 
			 extern int game_on;

			 if (!game_on)
			 {
				 game_on = !game_on;

				 Game^ GAME = gcnew Game();
				 GAME->Show();
			 }

}

private: System::Void ìåíþToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (checkBox1->Checked == true)
			 {
				 checkBox1->Checked = false;
				 Main_dataGridView->ReadOnly = true;
			 }
}


private: System::Void Zapros_dni_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}

private: System::Void Vilet_do_vremeni_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}
private: System::Void Prilet_do_vremeni_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}
private: System::Void Cost_bolshe_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}
private: System::Void Zapros_prilet_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}
private: System::Void Zapros_vilet_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}
private: System::Void Zapros_cost_Click(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}
private: System::Void Zapros_destination_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}
private: System::Void Zapros_type_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}
private: System::Void Zapros_number_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView_zapros->RowCount; i++)
				 dataGridView_zapros->Rows[i]->Visible = true;
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 extern int Admin_Mode;
			 if (Admin_Mode == 0)
			 {
				 ypravlenie_BD->TabPages->RemoveAt(1);
				 ypravlenie_BD->TabPages->RemoveAt(1);
				 checkBox1->Visible = false;
			 }

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			
				 Main_dataGridView->Rows->Clear();
				 dataGridView_delete->Rows->Clear();
				 dataGridView_zapros->Rows->Clear();
			 

			 In_delete->Text = "";
			 Delete_page->Enabled = false;
			 Zapros_page->Enabled = false;
			 checkBox1->Enabled = false;
}

};
}
