#pragma once
#include "String"
#include <iostream>

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxAB;
	private: System::Windows::Forms::Label^ resultM;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBoxBC;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ resultN;
	private: System::Windows::Forms::Label^ resultD;
	private: System::Windows::Forms::Label^ resultK;
	private: System::Windows::Forms::Label^ resultPPM;
	private: System::Windows::Forms::Label^ resultP;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label25;





	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::RadioButton^ Var1;
	private: System::Windows::Forms::CheckBox^ checkBoxAB;
	private: System::Windows::Forms::CheckBox^ checkBoxBC;

	private: System::Windows::Forms::RadioButton^ var2;
	private: System::Windows::Forms::RadioButton^ var3;
	private: System::Windows::Forms::RadioButton^ var4;
	private: System::Windows::Forms::RadioButton^ var5;
	private: System::Windows::Forms::RadioButton^ var6;
	private: System::Windows::Forms::Label^ Error;
	private: System::Windows::Forms::Label^ Error_no_var;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxAB = (gcnew System::Windows::Forms::TextBox());
			this->resultM = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->resultP = (gcnew System::Windows::Forms::Label());
			this->resultPPM = (gcnew System::Windows::Forms::Label());
			this->resultK = (gcnew System::Windows::Forms::Label());
			this->resultD = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->resultN = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxBC = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Error_no_var = (gcnew System::Windows::Forms::Label());
			this->Error = (gcnew System::Windows::Forms::Label());
			this->checkBoxBC = (gcnew System::Windows::Forms::CheckBox());
			this->var6 = (gcnew System::Windows::Forms::RadioButton());
			this->var5 = (gcnew System::Windows::Forms::RadioButton());
			this->var4 = (gcnew System::Windows::Forms::RadioButton());
			this->var3 = (gcnew System::Windows::Forms::RadioButton());
			this->Var1 = (gcnew System::Windows::Forms::RadioButton());
			this->var2 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBoxAB = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->tableLayoutPanel2->SetColumnSpan(this->button1, 4);
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(3, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(284, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Посчитать значение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->выходToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(980, 36);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(80, 30);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(141, 30);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->label1, 5);
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(4, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(661, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите значения в метрах (нецелые числа пишите через запятую):";
			// 
			// textBoxAB
			// 
			this->textBoxAB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBoxAB->Location = System::Drawing::Point(117, 30);
			this->textBoxAB->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxAB->Name = L"textBoxAB";
			this->textBoxAB->Size = System::Drawing::Size(139, 26);
			this->textBoxAB->TabIndex = 3;
			this->textBoxAB->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxAB_TextChanged);
			// 
			// resultM
			// 
			this->resultM->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->resultM->AutoSize = true;
			this->resultM->Location = System::Drawing::Point(926, 65);
			this->resultM->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultM->Name = L"resultM";
			this->resultM->Size = System::Drawing::Size(0, 20);
			this->resultM->TabIndex = 4;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->resultP, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->resultPPM, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->resultK, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->resultD, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->label20, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label19, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label18, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->label17, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->label15, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label14, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label13, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label6, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label21, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->label22, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->label23, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->label24, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->resultN, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->resultM, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label16, 1, 4);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 499);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(980, 210);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// resultP
			// 
			this->resultP->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->resultP->AutoSize = true;
			this->resultP->Location = System::Drawing::Point(926, 185);
			this->resultP->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultP->Name = L"resultP";
			this->resultP->Size = System::Drawing::Size(0, 20);
			this->resultP->TabIndex = 9;
			// 
			// resultPPM
			// 
			this->resultPPM->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->resultPPM->AutoSize = true;
			this->resultPPM->Location = System::Drawing::Point(926, 35);
			this->resultPPM->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultPPM->Name = L"resultPPM";
			this->resultPPM->Size = System::Drawing::Size(0, 20);
			this->resultPPM->TabIndex = 9;
			// 
			// resultK
			// 
			this->resultK->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->resultK->AutoSize = true;
			this->resultK->Location = System::Drawing::Point(926, 155);
			this->resultK->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultK->Name = L"resultK";
			this->resultK->Size = System::Drawing::Size(0, 20);
			this->resultK->TabIndex = 10;
			// 
			// resultD
			// 
			this->resultD->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->resultD->AutoSize = true;
			this->resultD->Location = System::Drawing::Point(926, 125);
			this->resultD->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultD->Name = L"resultD";
			this->resultD->Size = System::Drawing::Size(0, 20);
			this->resultD->TabIndex = 9;
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(815, 65);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(35, 20);
			this->label20->TabIndex = 9;
			this->label20->Text = L"шт.";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(815, 35);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(35, 20);
			this->label19->TabIndex = 8;
			this->label19->Text = L"шт.";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(86, 185);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(374, 20);
			this->label18->TabIndex = 8;
			this->label18->Text = L"подвесы с регулируемой высотой к перекрытию";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(86, 155);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(423, 20);
			this->label17->TabIndex = 8;
			this->label17->Text = L"поперечные направляющие (рейка, \"короткие\") - 0.6 м;";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(86, 95);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(383, 20);
			this->label15->TabIndex = 8;
			this->label15->Text = L"основные направляющие (несущие) – длина 3.6 м";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(86, 65);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(479, 20);
			this->label14->TabIndex = 8;
			this->label14->Text = L"угловые профили на стены (молдинг, L-профиль) – длина 3 м";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(86, 35);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(332, 20);
			this->label13->TabIndex = 8;
			this->label13->Text = L"плита минеральная – размеры 600х600 мм";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(30, 185);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 20);
			this->label12->TabIndex = 8;
			this->label12->Text = L"П";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(31, 155);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 20);
			this->label11->TabIndex = 8;
			this->label11->Text = L"К";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(30, 125);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 20);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Д";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(30, 95);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 20);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Н";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(30, 65);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"М";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(876, 5);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Количество";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(797, 5);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Ед. изм.";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(86, 5);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Наименование";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 5);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Позиция";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 35);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L"ППМ";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(815, 95);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(35, 20);
			this->label21->TabIndex = 10;
			this->label21->Text = L"шт.";
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(815, 125);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(35, 20);
			this->label22->TabIndex = 11;
			this->label22->Text = L"шт.";
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(815, 155);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(35, 20);
			this->label23->TabIndex = 12;
			this->label23->Text = L"шт.";
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(815, 185);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(35, 20);
			this->label24->TabIndex = 13;
			this->label24->Text = L"шт.";
			// 
			// resultN
			// 
			this->resultN->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->resultN->AutoSize = true;
			this->resultN->Location = System::Drawing::Point(926, 95);
			this->resultN->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultN->Name = L"resultN";
			this->resultN->Size = System::Drawing::Size(0, 20);
			this->resultN->TabIndex = 9;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(86, 125);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(443, 20);
			this->label16->TabIndex = 8;
			this->label16->Text = L"поперечные направляющие (распорка, \"длинные\") - 1.2 м";
			// 
			// textBoxBC
			// 
			this->textBoxBC->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBoxBC->Location = System::Drawing::Point(387, 30);
			this->textBoxBC->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxBC->Name = L"textBoxBC";
			this->textBoxBC->Size = System::Drawing::Size(141, 26);
			this->textBoxBC->TabIndex = 6;
			this->textBoxBC->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxBC_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(4, 30);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Длина AB";
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(264, 30);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(115, 25);
			this->label25->TabIndex = 8;
			this->label25->Text = L"Ширина BC";
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label26->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->label26, 3);
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(4, 63);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(316, 25);
			this->label26->TabIndex = 12;
			this->label26->Text = L"Основные направляющие вдоль:";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 5;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->Controls->Add(this->Error_no_var, 0, 10);
			this->tableLayoutPanel2->Controls->Add(this->Error, 4, 1);
			this->tableLayoutPanel2->Controls->Add(this->checkBoxBC, 4, 2);
			this->tableLayoutPanel2->Controls->Add(this->var6, 0, 8);
			this->tableLayoutPanel2->Controls->Add(this->var5, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->var4, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->var3, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label26, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBoxAB, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBoxBC, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->label25, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->Var1, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->var2, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->button1, 0, 9);
			this->tableLayoutPanel2->Controls->Add(this->checkBoxAB, 3, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 36);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 11;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 39)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(980, 389);
			this->tableLayoutPanel2->TabIndex = 13;
			// 
			// Error_no_var
			// 
			this->Error_no_var->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Error_no_var->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->Error_no_var, 4);
			this->Error_no_var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Error_no_var->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Error_no_var->Location = System::Drawing::Point(4, 355);
			this->Error_no_var->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Error_no_var->Name = L"Error_no_var";
			this->Error_no_var->Size = System::Drawing::Size(0, 29);
			this->Error_no_var->TabIndex = 14;
			// 
			// Error
			// 
			this->Error->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Error->AutoSize = true;
			this->Error->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Error->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Error->Location = System::Drawing::Point(535, 28);
			this->Error->Name = L"Error";
			this->Error->Size = System::Drawing::Size(0, 29);
			this->Error->TabIndex = 14;
			// 
			// checkBoxBC
			// 
			this->checkBoxBC->AutoSize = true;
			this->checkBoxBC->Location = System::Drawing::Point(535, 64);
			this->checkBoxBC->Name = L"checkBoxBC";
			this->checkBoxBC->Size = System::Drawing::Size(110, 24);
			this->checkBoxBC->TabIndex = 15;
			this->checkBoxBC->Text = L"оси 2 (BC)";
			this->checkBoxBC->UseVisualStyleBackColor = true;
			this->checkBoxBC->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxBC_CheckedChanged);
			// 
			// var6
			// 
			this->var6->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->var6, 5);
			this->var6->Location = System::Drawing::Point(3, 244);
			this->var6->Name = L"var6";
			this->var6->Size = System::Drawing::Size(659, 24);
			this->var6->TabIndex = 20;
			this->var6->TabStop = true;
			this->var6->Text = L"Расположение угла плиты потолка в оси 2 у стены с равным отступом от AD и BC.";
			this->var6->UseVisualStyleBackColor = true;
			this->var6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::var6_CheckedChanged);
			// 
			// var5
			// 
			this->var5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->var5->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->var5, 5);
			this->var5->Location = System::Drawing::Point(3, 214);
			this->var5->Name = L"var5";
			this->var5->Size = System::Drawing::Size(622, 24);
			this->var5->TabIndex = 19;
			this->var5->TabStop = true;
			this->var5->Text = L"Расположение плиты потолка в оси 2 у стены с равным отступом от AD и BC.";
			this->var5->UseVisualStyleBackColor = true;
			this->var5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::var5_CheckedChanged);
			// 
			// var4
			// 
			this->var4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->var4->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->var4, 5);
			this->var4->Location = System::Drawing::Point(3, 184);
			this->var4->Name = L"var4";
			this->var4->Size = System::Drawing::Size(655, 24);
			this->var4->TabIndex = 18;
			this->var4->TabStop = true;
			this->var4->Text = L"Расположение угла плиты потолка в оси 1 у стены с равным отступом от AB и CD";
			this->var4->UseVisualStyleBackColor = true;
			this->var4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::var4_CheckedChanged);
			// 
			// var3
			// 
			this->var3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->var3->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->var3, 5);
			this->var3->Location = System::Drawing::Point(3, 154);
			this->var3->Name = L"var3";
			this->var3->Size = System::Drawing::Size(618, 24);
			this->var3->TabIndex = 17;
			this->var3->TabStop = true;
			this->var3->Text = L"Расположение плиты потолка в оси 1 у стены с равным отступом от AB и CD";
			this->var3->UseVisualStyleBackColor = true;
			this->var3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::var3_CheckedChanged);
			// 
			// Var1
			// 
			this->Var1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Var1->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->Var1, 5);
			this->Var1->Location = System::Drawing::Point(3, 94);
			this->Var1->Name = L"Var1";
			this->Var1->Size = System::Drawing::Size(646, 24);
			this->Var1->TabIndex = 15;
			this->Var1->TabStop = true;
			this->Var1->Text = L"Расположение плиты потолка в центре помещения (в пересечении диагоналей)";
			this->Var1->UseVisualStyleBackColor = true;
			this->Var1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Var1_CheckedChanged);
			// 
			// var2
			// 
			this->var2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->var2->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->var2, 5);
			this->var2->Location = System::Drawing::Point(3, 124);
			this->var2->Name = L"var2";
			this->var2->Size = System::Drawing::Size(683, 24);
			this->var2->TabIndex = 16;
			this->var2->TabStop = true;
			this->var2->Text = L"Расположение угла плиты потолка в центре помещения (в пересечении диагоналей)";
			this->var2->UseVisualStyleBackColor = true;
			this->var2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::var2_CheckedChanged);
			// 
			// checkBoxAB
			// 
			this->checkBoxAB->AutoSize = true;
			this->checkBoxAB->Location = System::Drawing::Point(386, 64);
			this->checkBoxAB->Name = L"checkBoxAB";
			this->checkBoxAB->Size = System::Drawing::Size(110, 24);
			this->checkBoxAB->TabIndex = 14;
			this->checkBoxAB->Text = L"оси 1 (AB)";
			this->checkBoxAB->UseVisualStyleBackColor = true;
			this->checkBoxAB->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxAB_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 709);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private:
		double A = 0;
		double B = 0;
		int M = 0; //Молдинг
		int PPM = 0;
		int N = 0; //кол-во направляющих
		int D = 0; //кол-во длинных поперечных
		int K = 0; //кол-во короктих поперечных
		int P = 0; //кол-во подвесов
		int var_of_location;

		int line_of_N = 0; // кол-во линий для направляющих
		bool flag1_for_K = false;
		bool flag2_for_K = false;
		bool flag_of_Oxis = false;

	//Вводим значения AB
	private: System::Void textBoxAB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			A = Convert::ToDouble(this->textBoxAB->Text);
			this->Error->Text = "";
		}
		catch (FormatException^) {
			this->Error->Text = "Неправильно введены значения";
		}
	}

	//Вводим значения BC
	private: System::Void textBoxBC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			B = Convert::ToDouble(this->textBoxBC->Text);
			this->Error->Text = "";
		}
		catch (FormatException^) {
			this->Error->Text = "Неправильно введены значения";
		}
	}
			
	//По умолчанию, основная ось АВ
	private: System::Void checkBoxAB_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		flag_of_Oxis = true;
	}
		   
	//Меняем оси местами
	private: System::Void checkBoxBC_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		double copy_of_A = A;
		A = B;
		B = copy_of_A;
		flag_of_Oxis = true;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Error_no_var->Text = "";
		M = 0; //Молдинг
		PPM = 0;
		N = 0; //кол-во направляющих
		D = 0; //кол-во длинных поперечных
		K = 0; //кол-во короктих поперечных
		P = 0; //кол-во подвесов
		line_of_N = 0; // кол-во линий для направляющих

		if (A == 0 || B == 0) {
			this->Error->Text = "Введите значения!";
			return;
		}
		else {
			this->Error->Text = "";
		}

		if (flag_of_Oxis == false)
		{
			this->Error_no_var->Text = "Выберите направляющую ось!";
			return;
		}
		else
		{
			this->Error_no_var->Text = "";
		}

		switch (var_of_location)
		{
		case 1:
			Var1_of_location();
			break;
		case 2:
			Var2_of_location();
			break;
		case 3:
			Var3_of_location();
			break;
		case 4:
			Var4_of_location();
			break;
		case 5:
			Var5_of_location();
			break;
		case 6:
			Var6_of_location();
			break;
		default:
			this->Error_no_var->Text = "Выберите вид расположения!";
			return;
		}

		////////Рассчет молдинга////////
		M -= 2;
		for (float i = 0; i < A; i += 3)
			M++;
		for (float i = 0; i < B; i += 3)
			M++;
		if (fmod(2 * A, 3) < 1.5 && fmod(2 * A, 3) < fmod(2 * B, 3) && fmod(2 * B, 3) != 0)
			M += 2;
		else M += 1;
		M *= 2;

		////////Рассчет ППМ////////
		PPM = (int)ceil((A * B) / (0.6 * 0.6));

		////////Рассчет подвесов////////
		int count_of_P = 0;
		double dop_P = 3.6 - 0.6;
		for (double i = 0.6; i < B; i += 1.2) {
			count_of_P++;
			if (i > dop_P) {
				count_of_P++;
				dop_P += 3.6;
			}
		}
		P = (int)ceil(count_of_P * P);

		////////Вывод в таблицу////////
		this->resultM->Text = Convert::ToString(M);
		this->resultPPM->Text = Convert::ToString(PPM);
		this->resultN->Text = Convert::ToString(N);
		this->resultP->Text = Convert::ToString(P);
		this->resultD->Text = Convert::ToString(D);
		this->resultK->Text = Convert::ToString(K);

		line_of_N = 0; // кол-во линий для направляющих
		M = PPM = N = D = K = P = 0;

		flag1_for_K = flag2_for_K = false;
	}

	//Запоминаем одно из 6 расположений
	private: System::Void Var1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { var_of_location = 1; }
	private: System::Void var2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { var_of_location = 2; }
	private: System::Void var3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { var_of_location = 3; }
	private: System::Void var4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { var_of_location = 4; }
	private: System::Void var5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { var_of_location = 5; }
	private: System::Void var6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { var_of_location = 6; }

	//Функции рассчета матерьяла в зависимости от расположения
	private: System::Void Var1_of_location();
	private: System::Void Var2_of_location();
	private: System::Void Var3_of_location();
	private: System::Void Var4_of_location();
	private: System::Void Var5_of_location();
	private: System::Void Var6_of_location();


	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
};

