#pragma once

namespace tictactoeecpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnTic9;

	private: System::Windows::Forms::Button^ btnTic8;

	private: System::Windows::Forms::Button^ btnTic7;

	private: System::Windows::Forms::Button^ btnTic6;

	private: System::Windows::Forms::Button^ btnTic5;

	private: System::Windows::Forms::Button^ btnTic4;

	private: System::Windows::Forms::Button^ btnTic3;

	private: System::Windows::Forms::Button^ btnTic2;

	private: System::Windows::Forms::Button^ btnTic1;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ btnNewGame;

	private: System::Windows::Forms::Button^ btnReset;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ lblplayerO;

	private: System::Windows::Forms::Label^ lblplayerX;
	private: System::Windows::Forms::Label^ PlayerO;


	private: System::Windows::Forms::Label^ PlayerX;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblplayerO = (gcnew System::Windows::Forms::Label());
			this->lblplayerX = (gcnew System::Windows::Forms::Label());
			this->PlayerO = (gcnew System::Windows::Forms::Label());
			this->PlayerX = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->ForeColor = System::Drawing::Color::MintCream;
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1245, 105);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(427, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(368, 72);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Tic Tac Toe";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(12, 175);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1238, 466);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->btnTic9);
			this->panel4->Controls->Add(this->btnTic8);
			this->panel4->Controls->Add(this->btnTic7);
			this->panel4->Controls->Add(this->btnTic6);
			this->panel4->Controls->Add(this->btnTic5);
			this->panel4->Controls->Add(this->btnTic4);
			this->panel4->Controls->Add(this->btnTic3);
			this->panel4->Controls->Add(this->btnTic2);
			this->panel4->Controls->Add(this->btnTic1);
			this->panel4->Location = System::Drawing::Point(31, 33);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(745, 413);
			this->panel4->TabIndex = 2;
			// 
			// btnTic9
			// 
			this->btnTic9->BackColor = System::Drawing::Color::Azure;
			this->btnTic9->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic9->Location = System::Drawing::Point(496, 276);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(221, 130);
			this->btnTic9->TabIndex = 8;
			this->btnTic9->UseVisualStyleBackColor = false;
			this->btnTic9->Click += gcnew System::EventHandler(this, &MyForm::btnTic9_Click);
			// 
			// btnTic8
			// 
			this->btnTic8->BackColor = System::Drawing::Color::Azure;
			this->btnTic8->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic8->Location = System::Drawing::Point(251, 275);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(221, 130);
			this->btnTic8->TabIndex = 7;
			this->btnTic8->UseVisualStyleBackColor = false;
			this->btnTic8->Click += gcnew System::EventHandler(this, &MyForm::btnTic8_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->BackColor = System::Drawing::Color::Azure;
			this->btnTic7->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic7->Location = System::Drawing::Point(3, 281);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(221, 130);
			this->btnTic7->TabIndex = 6;
			this->btnTic7->UseVisualStyleBackColor = false;
			this->btnTic7->Click += gcnew System::EventHandler(this, &MyForm::btnTic7_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->BackColor = System::Drawing::Color::Azure;
			this->btnTic6->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic6->Location = System::Drawing::Point(496, 139);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(221, 130);
			this->btnTic6->TabIndex = 5;
			this->btnTic6->UseVisualStyleBackColor = false;
			this->btnTic6->Click += gcnew System::EventHandler(this, &MyForm::btnTic6_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->BackColor = System::Drawing::Color::Azure;
			this->btnTic5->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic5->Location = System::Drawing::Point(251, 139);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(221, 130);
			this->btnTic5->TabIndex = 4;
			this->btnTic5->UseVisualStyleBackColor = false;
			this->btnTic5->Click += gcnew System::EventHandler(this, &MyForm::btnTic5_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->BackColor = System::Drawing::Color::Azure;
			this->btnTic4->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic4->Location = System::Drawing::Point(3, 139);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(221, 130);
			this->btnTic4->TabIndex = 3;
			this->btnTic4->UseVisualStyleBackColor = false;
			this->btnTic4->Click += gcnew System::EventHandler(this, &MyForm::btnTic4_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->BackColor = System::Drawing::Color::Azure;
			this->btnTic3->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic3->Location = System::Drawing::Point(497, 3);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(220, 130);
			this->btnTic3->TabIndex = 2;
			this->btnTic3->UseVisualStyleBackColor = false;
			this->btnTic3->Click += gcnew System::EventHandler(this, &MyForm::btnTic3_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->BackColor = System::Drawing::Color::Azure;
			this->btnTic2->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic2->Location = System::Drawing::Point(251, 3);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(221, 130);
			this->btnTic2->TabIndex = 1;
			this->btnTic2->UseVisualStyleBackColor = false;
			this->btnTic2->Click += gcnew System::EventHandler(this, &MyForm::btnTic2_Click);
			// 
			// btnTic1
			// 
			this->btnTic1->BackColor = System::Drawing::Color::Azure;
			this->btnTic1->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic1->Location = System::Drawing::Point(3, 3);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(220, 130);
			this->btnTic1->TabIndex = 0;
			this->btnTic1->UseVisualStyleBackColor = false;
			this->btnTic1->Click += gcnew System::EventHandler(this, &MyForm::btnTic1_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Location = System::Drawing::Point(782, 33);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(449, 413);
			this->panel3->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->btnNewGame);
			this->panel6->Controls->Add(this->btnReset);
			this->panel6->Location = System::Drawing::Point(11, 219);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(422, 187);
			this->panel6->TabIndex = 3;
			// 
			// btnNewGame
			// 
			this->btnNewGame->BackColor = System::Drawing::Color::Azure;
			this->btnNewGame->Font = (gcnew System::Drawing::Font(L"Tahoma", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewGame->Location = System::Drawing::Point(3, 102);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(412, 78);
			this->btnNewGame->TabIndex = 3;
			this->btnNewGame->Text = L"New Game";
			this->btnNewGame->UseVisualStyleBackColor = false;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::Azure;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Tahoma", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(3, 3);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(412, 82);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->lblplayerO);
			this->panel5->Controls->Add(this->lblplayerX);
			this->panel5->Controls->Add(this->PlayerO);
			this->panel5->Controls->Add(this->PlayerX);
			this->panel5->Location = System::Drawing::Point(11, 14);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(431, 199);
			this->panel5->TabIndex = 2;
			// 
			// lblplayerO
			// 
			this->lblplayerO->BackColor = System::Drawing::Color::Azure;
			this->lblplayerO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblplayerO->Font = (gcnew System::Drawing::Font(L"Tahoma", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblplayerO->Location = System::Drawing::Point(220, 123);
			this->lblplayerO->Name = L"lblplayerO";
			this->lblplayerO->Size = System::Drawing::Size(195, 51);
			this->lblplayerO->TabIndex = 3;
			this->lblplayerO->Text = L"0";
			this->lblplayerO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblplayerO->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// lblplayerX
			// 
			this->lblplayerX->BackColor = System::Drawing::Color::Azure;
			this->lblplayerX->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblplayerX->Font = (gcnew System::Drawing::Font(L"Tahoma", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblplayerX->Location = System::Drawing::Point(220, 15);
			this->lblplayerX->Name = L"lblplayerX";
			this->lblplayerX->Size = System::Drawing::Size(195, 56);
			this->lblplayerX->TabIndex = 2;
			this->lblplayerX->Text = L"0";
			this->lblplayerX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PlayerO
			// 
			this->PlayerO->AutoSize = true;
			this->PlayerO->Font = (gcnew System::Drawing::Font(L"Tahoma", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerO->Location = System::Drawing::Point(3, 116);
			this->PlayerO->Name = L"PlayerO";
			this->PlayerO->Size = System::Drawing::Size(202, 58);
			this->PlayerO->TabIndex = 1;
			this->PlayerO->Text = L"Player O";
			this->PlayerO->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// PlayerX
			// 
			this->PlayerX->AutoSize = true;
			this->PlayerX->Font = (gcnew System::Drawing::Font(L"Tahoma", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerX->Location = System::Drawing::Point(9, 15);
			this->PlayerX->Name = L"PlayerX";
			this->PlayerX->Size = System::Drawing::Size(196, 58);
			this->PlayerX->TabIndex = 0;
			this->PlayerX->Text = L"Player X";
			this->PlayerX->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(1262, 653);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
		Boolean checker;
		int plusone;
#pragma endregion
		void Enable_False() {

			btnTic1->Enabled = false;
			btnTic2->Enabled = false;
			btnTic3->Enabled = false;
			btnTic4->Enabled = false;
			btnTic5->Enabled = false;
			btnTic6->Enabled = false;
			btnTic7->Enabled = false;
			btnTic8->Enabled = false;
			btnTic9->Enabled = false;

		}
		void score() {
			if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "X") {
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic2->BackColor = System::Drawing::Color::PowderBlue;
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse (lblplayerX->Text);
				lblplayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X") {
				btnTic1->BackColor = System::Drawing::Color::Pink;
				btnTic4->BackColor = System::Drawing::Color::Pink;
				btnTic7->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerX->Text);
				lblplayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X") {
				btnTic1->BackColor = System::Drawing::Color::Azure;
				btnTic5->BackColor = System::Drawing::Color::Azure;
				btnTic9->BackColor = System::Drawing::Color::Azure;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerX->Text);
				lblplayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X") {
				btnTic4->BackColor = System::Drawing::Color::AliceBlue;
				btnTic5->BackColor = System::Drawing::Color::AliceBlue;
				btnTic6->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerX->Text);
				lblplayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X") {
				btnTic7->BackColor = System::Drawing::Color::Violet;
				btnTic8->BackColor = System::Drawing::Color::Violet;
				btnTic9->BackColor = System::Drawing::Color::Violet;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerX->Text);
				lblplayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

	

			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X") {
				btnTic3->BackColor = System::Drawing::Color::LemonChiffon;
				btnTic5->BackColor = System::Drawing::Color::LemonChiffon;
				btnTic7->BackColor = System::Drawing::Color::LemonChiffon;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerX->Text);
				lblplayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			//************************************************************
			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O") {
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic2->BackColor = System::Drawing::Color::PowderBlue;
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O") {
				btnTic1->BackColor = System::Drawing::Color::Pink;
				btnTic4->BackColor = System::Drawing::Color::Pink;
				btnTic7->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O") {
				btnTic1->BackColor = System::Drawing::Color::Azure;
				btnTic5->BackColor = System::Drawing::Color::Azure;
				btnTic9->BackColor = System::Drawing::Color::Azure;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "O") {
				btnTic4->BackColor = System::Drawing::Color::AliceBlue;
				btnTic5->BackColor = System::Drawing::Color::AliceBlue;
				btnTic6->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O") {
				btnTic7->BackColor = System::Drawing::Color::Violet;
				btnTic8->BackColor = System::Drawing::Color::Violet;
				btnTic9->BackColor = System::Drawing::Color::Violet;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

	

			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O") {
				btnTic3->BackColor = System::Drawing::Color::LemonChiffon;
				btnTic5->BackColor = System::Drawing::Color::LemonChiffon;
				btnTic7->BackColor = System::Drawing::Color::LemonChiffon;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

		}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";

	lblplayerX->Text = "0";
	lblplayerO->Text = "0";


	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic1->Text = "X";
		checker = true;
	}
	else {
		btnTic1->Text = "O";
		checker = false;
	}
	score();
	btnTic1->Enabled = false;
}
private: System::Void btnTic2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic2->Text = "X";
		checker = true;
	}
	else {
		btnTic2->Text = "O";
		checker = false;
	}
	score();
	btnTic2->Enabled = false;
}
private: System::Void btnTic3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic3->Text = "X";
		checker = true;
	}
	else {
		btnTic3->Text = "O";
		checker = false;
	}
	score();
	btnTic3->Enabled = false;
}
private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic4->Text = "X";
		checker = true;
	}
	else {
		btnTic4->Text = "O";
		checker = false;
	}
	score();
	btnTic4->Enabled = false;
}
private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic5->Text = "X";
		checker = true;
	}
	else {
		btnTic5->Text = "O";
		checker = false;
	}
	score();
	btnTic5->Enabled = false;
}
private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic6->Text = "X";
		checker = true;
	}
	else {
		btnTic6->Text = "O";
		checker = false;
	}
	score();
	btnTic6->Enabled = false;
}
private: System::Void btnTic7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic7->Text = "X";
		checker = true;
	}
	else {
		btnTic7->Text = "O";
		checker = false;
	}
	score();
	btnTic7->Enabled = false;
}
private: System::Void btnTic8_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic8->Text = "X";
		checker = true;
	}
	else {
		btnTic8->Text = "O";
		checker = false;
	}
	score();
	btnTic8->Enabled = false;
}
private: System::Void btnTic9_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic9->Text = "X";
		checker = true;
	}
	else {
		btnTic9->Text = "O";
		checker = false;
	}
	score();
	btnTic9->Enabled = false;
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";

	btnNewGame->Enabled = true;

	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;
}
};
}
