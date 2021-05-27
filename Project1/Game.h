#pragma once
#define SIZE 7

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  справкаToolStripMenuItem;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewButtonColumn^  C0;
	private: System::Windows::Forms::DataGridViewButtonColumn^  C1;
	private: System::Windows::Forms::DataGridViewButtonColumn^  C2;
	private: System::Windows::Forms::DataGridViewButtonColumn^  C3;
	private: System::Windows::Forms::DataGridViewButtonColumn^  C4;
	private: System::Windows::Forms::DataGridViewButtonColumn^  C5;
	private: System::Windows::Forms::DataGridViewButtonColumn^  C6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->C0 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->C3 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->C4 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->C5 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->C6 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->справкаToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(414, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::справкаToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(256, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Начать игру";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCoral;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(256, 217);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Закончить игру";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Game::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->C0, this->C1,
					this->C2, this->C3, this->C4, this->C5, this->C6
			});
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 27);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(213, 213);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Game::dataGridView1_CellClick);
			// 
			// C0
			// 
			this->C0->HeaderText = L"";
			this->C0->Name = L"C0";
			this->C0->Width = 30;
			// 
			// C1
			// 
			this->C1->HeaderText = L"";
			this->C1->Name = L"C1";
			this->C1->Width = 30;
			// 
			// C2
			// 
			this->C2->HeaderText = L"";
			this->C2->Name = L"C2";
			this->C2->Width = 30;
			// 
			// C3
			// 
			this->C3->HeaderText = L"";
			this->C3->Name = L"C3";
			this->C3->Width = 30;
			// 
			// C4
			// 
			this->C4->HeaderText = L"";
			this->C4->Name = L"C4";
			this->C4->Width = 30;
			// 
			// C5
			// 
			this->C5->HeaderText = L"";
			this->C5->Name = L"C5";
			this->C5->Width = 30;
			// 
			// C6
			// 
			this->C6->HeaderText = L"";
			this->C6->Name = L"C6";
			this->C6->Width = 30;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(256, 64);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 30);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(256, 100);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 30);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->Enabled = false;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(256, 136);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 30);
			this->button5->TabIndex = 7;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Green;
			this->button6->Enabled = false;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Location = System::Drawing::Point(256, 172);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 30);
			this->button6->TabIndex = 8;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(292, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 19);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ячейка с фишкой";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(292, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 19);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Пустая ячейка";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(292, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 30);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Ячейка вне игрового поля";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(292, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 42);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Выбранная для хода фишка";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FloralWhite;
			this->ClientSize = System::Drawing::Size(414, 257);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Game";
			this->Text = L"Game";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Game::Game_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
void color()
{
	extern int massiv[SIZE][SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{

			if (massiv[i][j] == 0)
			{
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::White;
				dataGridView1->Rows[i]->Cells[j]->Style->ForeColor = Color::White;
			}
			else if (massiv[i][j] == 1)
			{
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Red;
				dataGridView1->Rows[i]->Cells[j]->Style->ForeColor = Color::Red;
			}
			else if (massiv[i][j] == 2)
			{
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Gray;
				dataGridView1->Rows[i]->Cells[j]->Style->ForeColor = Color::Gray;
			}
		}
	}
}

int check()
{
	extern int massiv[SIZE][SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (massiv[i][j] == 1)
			{
				if (i + 2 < SIZE)
				if ((massiv[i + 1][j] == 1 && massiv[i + 2][j] == 0))
					return 1;

				if (i - 2 >= 0)
				if ((massiv[i - 1][j] == 1 && massiv[i - 2][j] == 0))
					return 1;

				if (j + 2 < SIZE)
				if ((massiv[i][j + 1] == 1 && massiv[i][j + 2] == 0))
					return 1;

				if (j - 2 >= 0)
				if ((massiv[i][j - 1] == 1 && massiv[i][j - 2] == 0))
					return 1;
			}

		}
	}

	return 0;
}

void delet(char flag, int n, int m)
{
	extern int massiv[SIZE][SIZE];
	massiv[n][m] = 1;

	if (flag == 1)
	{
		massiv[n + 1][m] = 0;
		massiv[n + 2][m] = 0;
	}

	if (flag == 2)
	{
		massiv[n - 1][m] = 0;
		massiv[n - 2][m] = 0;
	}

	if (flag == 3)
	{
		massiv[n][m + 1] = 0;
		massiv[n][m + 2] = 0;
	}

	if (flag == 4)
	{
		massiv[n][m - 1] = 0;
		massiv[n][m - 2] = 0;
	}
}


private: System::Void Game_Load(System::Object^  sender, System::EventArgs^  e) {
				 
			 dataGridView1->CurrentCell = nullptr;

			 C0->FlatStyle = FlatStyle::Popup;
			 C1->FlatStyle = FlatStyle::Popup;
			 C2->FlatStyle = FlatStyle::Popup;
			 C3->FlatStyle = FlatStyle::Popup;
			 C4->FlatStyle = FlatStyle::Popup;
			 C5->FlatStyle = FlatStyle::Popup;
			 C6->FlatStyle = FlatStyle::Popup;
			 
			 dataGridView1->Rows->Add();
			 dataGridView1->Rows->Add();
			 dataGridView1->Rows->Add();
			 dataGridView1->Rows->Add();
			 dataGridView1->Rows->Add();
			 dataGridView1->Rows->Add();
			 dataGridView1->Rows->Add();
			 
			 extern int massiv[SIZE][SIZE];
				 color();
	}

//Начать игру заново
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 dataGridView1->Enabled = true;
			 extern int massiv[SIZE][SIZE];
			 extern int first;
			 first = 1;

			 for (int i = 0; i < SIZE; i++)
			 for (int j = 0; j < SIZE; j++)
			 {
				 if ((i < 2 || i > 4) && (j < 2 || j > 4))
				 {
					 massiv[i][j] = 2;
					 continue;
				 }

				 if (i == 3 && j == 3)
				 {
					 massiv[i][j] = 0;
					 continue;
				 }
				 massiv[i][j] = 1;
			 }

			 color();
			 MessageBox::Show("Игра началась! Игровое поле разблокировано! Чтобы закончить игру, нажмите кнопку Закончить игру.", "Sucsess", MessageBoxButtons::OK);
}

private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 extern int first;
			 extern int massiv[SIZE][SIZE];
			 extern int np;
			 extern int mp;
			 int n = Convert::ToInt32(dataGridView1->CurrentCell->RowIndex);
			 int m = Convert::ToInt32(dataGridView1->CurrentCell->ColumnIndex);
			 
			 //Убрать выделение
			 if (first && massiv[n][m] == 1)
				 ;
			 else
			 if (first == 0 && (n == np) && (m == mp))
				 ;
			 else
				 dataGridView1->CurrentCell = nullptr;
			 
			 //Игра
			 if (first)
			 {
				 if (massiv[n][m] == 1)
				 {
					 np = n;
					 mp = m;
					 first = 0;
					 dataGridView1->CurrentCell->Style->BackColor = System::Drawing::Color::Green;
					 dataGridView1->CurrentCell = nullptr;
				 }
				 else
				 {
					 if (massiv[n][m] == 0)
					 {
						 MessageBox::Show("Здесь нет фишки!", "Error", MessageBoxButtons::OK);
						 goto end;
					 }
					 else
					 {
						 MessageBox::Show("По правилам игры, указанное поле не является частью игрового поля!", "Error", MessageBoxButtons::OK);
						 goto end;
					 }
				 }
			 }
			 else
			 {
				 if ((n == np) && (m == mp))
				 {
					 dataGridView1->CurrentCell->Style->BackColor = System::Drawing::Color::Red;
					 dataGridView1->CurrentCell = nullptr;
					 first = 1;
					 np = 3;
					 mp = 3;
					 goto end;
				 }

				 int flag;

				 if (massiv[n][m] == 0)
				 {
					 int sucsess = 1, usl = 0;

					 if (((np == n) || (mp == m)))
					 {

						 if (np - n - 1 == 1)
						 {
							 flag = 1;
							 usl = 1;
							 if (massiv[n + 1][m] == 0)
							 {
								 MessageBox::Show("Указанное место выбрать нельзя! Ознакомтесь с правилами игры!", "Error", MessageBoxButtons::OK);
								 sucsess = 0;
								 goto end;
							 }
						 }

						 if (n - np - 1 == 1)
						 {
							 flag = 2;
							 usl = 1;
							 if (massiv[n - 1][m] == 0)
							 {
								 MessageBox::Show("Указанное место выбрать нельзя! Ознакомтесь с правилами игры!", "Error", MessageBoxButtons::OK);
								 sucsess = 0;
								 goto end;
							 }
						 }

						 if (mp - m - 1 == 1)
						 {
							 flag = 3;
							 usl = 1;
							 if (massiv[n][m + 1] == 0)
							 {
								 MessageBox::Show("Указанное место выбрать нельзя! Ознакомтесь с правилами игры!", "Error", MessageBoxButtons::OK);
								 sucsess = 0;
								 goto end;
							 }
						 }

						 if (m - mp - 1 == 1)
						 {
							 flag = 4;
							 usl = 1;
							 if (massiv[n][m - 1] == 0)
							 {
								 MessageBox::Show("Указанное место выбрать нельзя! Ознакомтесь с правилами игры!", "Error", MessageBoxButtons::OK);
								 sucsess = 0;
								 goto end;
							 }
						 }

usloviya:						 if (sucsess && usl)
						 {
							 delet(flag, n, m);
							 color();
							 first = 1;
							 goto proverka;
						 }
						 else
						 {
							 MessageBox::Show("Указанное место выбрать нельзя! Ознакомтесь с правилами игры!", "Error", MessageBoxButtons::OK);
							 goto end;
						 }
					 }
					 else
					 {
						 MessageBox::Show("Указанное место выбрать нельзя! Ознакомтесь с правилами игры!", "Error", MessageBoxButtons::OK);
						 goto end;
					 }
				 }
				 else
				 {
					 if (massiv[n][m] == 2)
					 {
						 MessageBox::Show("По правилам игры, указанное поле не является частью игрового поля!", "Error", MessageBoxButtons::OK);
						 goto end;
					 }
					 if (massiv[n][m] == 1)
					 {
						 MessageBox::Show("В указанном поле уже есть фишка!", "Error", MessageBoxButtons::OK);
						 goto end;
					 }
				 }
			 }

proverka:			 if (!check())
			 {
				 MessageBox::Show("Игра окончена, ходов больше нет!", "Sucsess", MessageBoxButtons::OK);
				 dataGridView1->Enabled = false;
			 }
		 end:;
}

//Завершить игру
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Enabled = false;
			 extern int massiv[SIZE][SIZE];
			 extern int first;
			 first = 1;

			 int res = 0;

			 
			 for (int i = 0; i < SIZE; i++)
			 for (int j = 0; j < SIZE; j++)
			 {
				 if (massiv[i][j] == 1)
					 res++;
				 
				 if ((i < 2 || i > 4) && (j < 2 || j > 4))
				 {
					 massiv[i][j] = 2;
					 continue;
				 }

				 if (i == 3 && j == 3)
				 {
					 massiv[i][j] = 0;
					 continue;
				 }
				 massiv[i][j] = 1;
			 }

			 color();
			 MessageBox::Show("Игра закончена! Игровое поле заблокировано! Чтобы сыграть ещё раз, нажмите кнопку Начать игру.", "Sucsess", MessageBoxButtons::OK);

}
private: System::Void справкаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("\t\t\t ЙОГА"+"\n"+"\t\tДревняя индусская игра"+"\n"+
				 "Цель игры - побить максимум фишек."+"\n"+
				 "Ходить можно только перешагивая через одну фишку. По Диагонали ходить нельзя! Фишка, через которую перешагнули,"+
				 "считается битой и удаляется с поля. Перешагивать можно только в пустую ячейку. Игра считается законценой, если ходов больше нет."+
				 "Чем меньше фишек осталось на поле, тем лучше результат.", "Info", MessageBoxButtons::OK);
}
private: System::Void Game_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	extern int game_on;
	game_on = 0;
}
};
}
