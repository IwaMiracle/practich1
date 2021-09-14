#pragma once
namespace practich1 {
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
	private: System::Windows::Forms::Label^ labellogin;
	private: System::Windows::Forms::Label^ labelpar;
	protected:
	protected:
	private: System::Windows::Forms::TextBox^ Boxlog;
	private: System::Windows::Forms::TextBox^ Boxpar;
	private: System::Windows::Forms::Button^ Butt1;
	private: System::Windows::Forms::Label^ labelavt;
	private: System::Windows::Forms::TextBox^ filename;
	private: System::Windows::Forms::Label^ labelll;
	private: System::Windows::Forms::MenuStrip^ contmenu;
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьсяВМенюToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ menu;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::Button^ Changes;
	private: System::Windows::Forms::Button^ Game;
	private: System::Windows::Forms::Button^ letsgo;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ Table;
	private: System::Windows::Forms::GroupBox^ Searchbox;
	private: System::Windows::Forms::Button^ Scam;
	private: System::Windows::Forms::TextBox^ serp3;
	private: System::Windows::Forms::TextBox^ serp7;
	private: System::Windows::Forms::TextBox^ serp5;
	private: System::Windows::Forms::TextBox^ serp2;
	private: System::Windows::Forms::TextBox^ serp6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ serp4;
	private: System::Windows::Forms::TextBox^ serp1;
	private: System::Windows::Forms::DataGridView^ Tabl1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Numb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Namestreet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ housenumb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ size;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ floors;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ rooms;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ peoples;
	private: System::Windows::Forms::Button^ View1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labellogin = (gcnew System::Windows::Forms::Label());
			this->labelpar = (gcnew System::Windows::Forms::Label());
			this->Boxlog = (gcnew System::Windows::Forms::TextBox());
			this->Boxpar = (gcnew System::Windows::Forms::TextBox());
			this->Butt1 = (gcnew System::Windows::Forms::Button());
			this->labelavt = (gcnew System::Windows::Forms::Label());
			this->filename = (gcnew System::Windows::Forms::TextBox());
			this->labelll = (gcnew System::Windows::Forms::Label());
			this->contmenu = (gcnew System::Windows::Forms::MenuStrip());
			this->вернутьсяВМенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu = (gcnew System::Windows::Forms::GroupBox());
			this->View1 = (gcnew System::Windows::Forms::Button());
			this->Game = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->Changes = (gcnew System::Windows::Forms::Button());
			this->letsgo = (gcnew System::Windows::Forms::Button());
			this->Table = (gcnew System::Windows::Forms::GroupBox());
			this->Tabl1 = (gcnew System::Windows::Forms::DataGridView());
			this->Numb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Namestreet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->housenumb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->size = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->floors = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rooms = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->peoples = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Searchbox = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->serp3 = (gcnew System::Windows::Forms::TextBox());
			this->serp7 = (gcnew System::Windows::Forms::TextBox());
			this->serp5 = (gcnew System::Windows::Forms::TextBox());
			this->serp2 = (gcnew System::Windows::Forms::TextBox());
			this->serp6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->serp4 = (gcnew System::Windows::Forms::TextBox());
			this->serp1 = (gcnew System::Windows::Forms::TextBox());
			this->Scam = (gcnew System::Windows::Forms::Button());
			this->contmenu->SuspendLayout();
			this->menu->SuspendLayout();
			this->Table->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabl1))->BeginInit();
			this->Searchbox->SuspendLayout();
			this->SuspendLayout();
			// 
			// labellogin
			// 
			this->labellogin->AutoSize = true;
			this->labellogin->Location = System::Drawing::Point(539, 383);
			this->labellogin->Name = L"labellogin";
			this->labellogin->Size = System::Drawing::Size(38, 13);
			this->labellogin->TabIndex = 0;
			this->labellogin->Text = L"Логин";
			// 
			// labelpar
			// 
			this->labelpar->AutoSize = true;
			this->labelpar->Location = System::Drawing::Point(539, 396);
			this->labelpar->Name = L"labelpar";
			this->labelpar->Size = System::Drawing::Size(45, 13);
			this->labelpar->TabIndex = 1;
			this->labelpar->Text = L"Пароль";
			// 
			// Boxlog
			// 
			this->Boxlog->Location = System::Drawing::Point(652, 356);
			this->Boxlog->Name = L"Boxlog";
			this->Boxlog->Size = System::Drawing::Size(174, 20);
			this->Boxlog->TabIndex = 2;
			// 
			// Boxpar
			// 
			this->Boxpar->Location = System::Drawing::Point(652, 393);
			this->Boxpar->Name = L"Boxpar";
			this->Boxpar->Size = System::Drawing::Size(174, 20);
			this->Boxpar->TabIndex = 3;
			// 
			// Butt1
			// 
			this->Butt1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Butt1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Butt1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Butt1->Location = System::Drawing::Point(779, 462);
			this->Butt1->Name = L"Butt1";
			this->Butt1->Size = System::Drawing::Size(75, 23);
			this->Butt1->TabIndex = 4;
			this->Butt1->Text = L"Войти";
			this->Butt1->UseVisualStyleBackColor = false;
			this->Butt1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// labelavt
			// 
			this->labelavt->AutoSize = true;
			this->labelavt->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelavt->Location = System::Drawing::Point(703, 297);
			this->labelavt->Name = L"labelavt";
			this->labelavt->Size = System::Drawing::Size(125, 23);
			this->labelavt->TabIndex = 5;
			this->labelavt->Text = L"Авторизация";
			// 
			// filename
			// 
			this->filename->Location = System::Drawing::Point(626, 424);
			this->filename->Name = L"filename";
			this->filename->Size = System::Drawing::Size(228, 20);
			this->filename->TabIndex = 6;
			this->filename->Visible = false;
			// 
			// labelll
			// 
			this->labelll->AutoSize = true;
			this->labelll->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelll->Location = System::Drawing::Point(648, 322);
			this->labelll->Name = L"labelll";
			this->labelll->Size = System::Drawing::Size(197, 19);
			this->labelll->TabIndex = 7;
			this->labelll->Text = L"Введите название файла";
			this->labelll->Visible = false;
			// 
			// contmenu
			// 
			this->contmenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вернутьсяВМенюToolStripMenuItem,
					this->справкаToolStripMenuItem
			});
			this->contmenu->Location = System::Drawing::Point(0, 0);
			this->contmenu->Name = L"contmenu";
			this->contmenu->Size = System::Drawing::Size(1316, 24);
			this->contmenu->TabIndex = 10;
			this->contmenu->Text = L"menuStrip1";
			this->contmenu->Visible = false;
			// 
			// вернутьсяВМенюToolStripMenuItem
			// 
			this->вернутьсяВМенюToolStripMenuItem->Name = L"вернутьсяВМенюToolStripMenuItem";
			this->вернутьсяВМенюToolStripMenuItem->Size = System::Drawing::Size(119, 20);
			this->вернутьсяВМенюToolStripMenuItem->Text = L"Вернуться в меню";
			this->вернутьсяВМенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вернутьсяВМенюToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->menu->Controls->Add(this->View1);
			this->menu->Controls->Add(this->Game);
			this->menu->Controls->Add(this->Exit);
			this->menu->Controls->Add(this->Search);
			this->menu->Controls->Add(this->Changes);
			this->menu->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menu->Location = System::Drawing::Point(875, 27);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(420, 325);
			this->menu->TabIndex = 11;
			this->menu->TabStop = false;
			this->menu->Text = L"Главное меню";
			this->menu->Visible = false;
			// 
			// View1
			// 
			this->View1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->View1->Location = System::Drawing::Point(44, 100);
			this->View1->Name = L"View1";
			this->View1->Size = System::Drawing::Size(159, 38);
			this->View1->TabIndex = 5;
			this->View1->Text = L"Вывод таблицы";
			this->View1->UseVisualStyleBackColor = false;
			this->View1->Click += gcnew System::EventHandler(this, &MyForm::View1_Click);
			// 
			// Game
			// 
			this->Game->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Game->Location = System::Drawing::Point(44, 205);
			this->Game->Name = L"Game";
			this->Game->Size = System::Drawing::Size(159, 38);
			this->Game->TabIndex = 4;
			this->Game->Text = L"Game";
			this->Game->UseVisualStyleBackColor = false;
			this->Game->Click += gcnew System::EventHandler(this, &MyForm::Game_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Exit->Location = System::Drawing::Point(44, 255);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(159, 38);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Search->Location = System::Drawing::Point(44, 152);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(159, 38);
			this->Search->TabIndex = 2;
			this->Search->Text = L"Поиск по таблице";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &MyForm::Search_Click);
			// 
			// Changes
			// 
			this->Changes->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Changes->Enabled = false;
			this->Changes->Location = System::Drawing::Point(44, 47);
			this->Changes->Name = L"Changes";
			this->Changes->Size = System::Drawing::Size(159, 38);
			this->Changes->TabIndex = 0;
			this->Changes->Text = L"Изменение данных";
			this->Changes->UseVisualStyleBackColor = false;
			this->Changes->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// letsgo
			// 
			this->letsgo->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->letsgo->Location = System::Drawing::Point(607, 455);
			this->letsgo->Name = L"letsgo";
			this->letsgo->Size = System::Drawing::Size(119, 36);
			this->letsgo->TabIndex = 5;
			this->letsgo->Text = L"Продолжить";
			this->letsgo->UseVisualStyleBackColor = true;
			this->letsgo->Visible = false;
			this->letsgo->Click += gcnew System::EventHandler(this, &MyForm::letsgo_Click);
			// 
			// Table
			// 
			this->Table->Controls->Add(this->Tabl1);
			this->Table->Font = (gcnew System::Drawing::Font(L"Chocolate cyr-lat", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table->Location = System::Drawing::Point(30, 12);
			this->Table->Name = L"Table";
			this->Table->Size = System::Drawing::Size(696, 280);
			this->Table->TabIndex = 12;
			this->Table->TabStop = false;
			this->Table->Text = L"База данных";
			this->Table->Visible = false;
			// 
			// Tabl1
			// 
			this->Tabl1->AllowUserToAddRows = false;
			this->Tabl1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tabl1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Numb, this->Namestreet,
					this->housenumb, this->year, this->size, this->floors, this->rooms, this->peoples
			});
			this->Tabl1->Location = System::Drawing::Point(26, 28);
			this->Tabl1->Name = L"Tabl1";
			this->Tabl1->RowHeadersVisible = false;
			this->Tabl1->Size = System::Drawing::Size(644, 224);
			this->Tabl1->TabIndex = 1;
			// 
			// Numb
			// 
			this->Numb->FillWeight = 30;
			this->Numb->HeaderText = L"№";
			this->Numb->Name = L"Numb";
			this->Numb->ReadOnly = true;
			this->Numb->Width = 30;
			// 
			// Namestreet
			// 
			this->Namestreet->HeaderText = L"Название улицы";
			this->Namestreet->Name = L"Namestreet";
			this->Namestreet->ReadOnly = true;
			// 
			// housenumb
			// 
			this->housenumb->HeaderText = L"Номер дома";
			this->housenumb->Name = L"housenumb";
			this->housenumb->ReadOnly = true;
			// 
			// year
			// 
			this->year->HeaderText = L"Год сдачи в эксплуатацию";
			this->year->Name = L"year";
			this->year->ReadOnly = true;
			// 
			// size
			// 
			this->size->FillWeight = 70;
			this->size->HeaderText = L"Размер";
			this->size->MaxInputLength = 3276;
			this->size->Name = L"size";
			this->size->ReadOnly = true;
			this->size->Width = 70;
			// 
			// floors
			// 
			this->floors->FillWeight = 80;
			this->floors->HeaderText = L"Количество этажей";
			this->floors->Name = L"floors";
			this->floors->ReadOnly = true;
			this->floors->Width = 80;
			// 
			// rooms
			// 
			this->rooms->FillWeight = 80;
			this->rooms->HeaderText = L"Количество комнат";
			this->rooms->Name = L"rooms";
			this->rooms->ReadOnly = true;
			this->rooms->Width = 80;
			// 
			// peoples
			// 
			this->peoples->FillWeight = 80;
			this->peoples->HeaderText = L"Количество людей";
			this->peoples->Name = L"peoples";
			this->peoples->ReadOnly = true;
			this->peoples->Width = 80;
			// 
			// Searchbox
			// 
			this->Searchbox->Controls->Add(this->label8);
			this->Searchbox->Controls->Add(this->label7);
			this->Searchbox->Controls->Add(this->label6);
			this->Searchbox->Controls->Add(this->label5);
			this->Searchbox->Controls->Add(this->label4);
			this->Searchbox->Controls->Add(this->label3);
			this->Searchbox->Controls->Add(this->label2);
			this->Searchbox->Controls->Add(this->serp3);
			this->Searchbox->Controls->Add(this->serp7);
			this->Searchbox->Controls->Add(this->serp5);
			this->Searchbox->Controls->Add(this->serp2);
			this->Searchbox->Controls->Add(this->serp6);
			this->Searchbox->Controls->Add(this->label1);
			this->Searchbox->Controls->Add(this->serp4);
			this->Searchbox->Controls->Add(this->serp1);
			this->Searchbox->Controls->Add(this->Scam);
			this->Searchbox->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Searchbox->Location = System::Drawing::Point(30, 344);
			this->Searchbox->Name = L"Searchbox";
			this->Searchbox->Size = System::Drawing::Size(644, 187);
			this->Searchbox->TabIndex = 13;
			this->Searchbox->TabStop = false;
			this->Searchbox->Text = L"Поиск";
			this->Searchbox->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(329, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 19);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Кол-во людей";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(165, 138);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 19);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Кол-во комнат";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(165, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 19);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Кол-во этажей";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(165, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 19);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Размер";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 19);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Год сдачи";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 19);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Номер дома";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 19);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Название улицы";
			// 
			// serp3
			// 
			this->serp3->AccessibleDescription = L"";
			this->serp3->AccessibleName = L"";
			this->serp3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->serp3->Location = System::Drawing::Point(24, 157);
			this->serp3->Name = L"serp3";
			this->serp3->Size = System::Drawing::Size(111, 22);
			this->serp3->TabIndex = 14;
			// 
			// serp7
			// 
			this->serp7->AccessibleDescription = L"";
			this->serp7->AccessibleName = L"";
			this->serp7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->serp7->Location = System::Drawing::Point(346, 70);
			this->serp7->Name = L"serp7";
			this->serp7->Size = System::Drawing::Size(111, 22);
			this->serp7->TabIndex = 13;
			// 
			// serp5
			// 
			this->serp5->AccessibleDescription = L"";
			this->serp5->AccessibleName = L"";
			this->serp5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->serp5->Location = System::Drawing::Point(183, 113);
			this->serp5->Name = L"serp5";
			this->serp5->Size = System::Drawing::Size(111, 22);
			this->serp5->TabIndex = 12;
			// 
			// serp2
			// 
			this->serp2->AccessibleDescription = L"";
			this->serp2->AccessibleName = L"";
			this->serp2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->serp2->Location = System::Drawing::Point(24, 113);
			this->serp2->Name = L"serp2";
			this->serp2->Size = System::Drawing::Size(111, 22);
			this->serp2->TabIndex = 11;
			// 
			// serp6
			// 
			this->serp6->AccessibleDescription = L"";
			this->serp6->AccessibleName = L"";
			this->serp6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->serp6->Location = System::Drawing::Point(183, 157);
			this->serp6->Name = L"serp6";
			this->serp6->Size = System::Drawing::Size(111, 22);
			this->serp6->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(336, 19);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Введите значения для поиска(незаполненные не учитываются)";
			// 
			// serp4
			// 
			this->serp4->AccessibleDescription = L"";
			this->serp4->AccessibleName = L"";
			this->serp4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->serp4->Location = System::Drawing::Point(183, 70);
			this->serp4->Name = L"serp4";
			this->serp4->Size = System::Drawing::Size(111, 22);
			this->serp4->TabIndex = 8;
			// 
			// serp1
			// 
			this->serp1->AccessibleDescription = L"";
			this->serp1->AccessibleName = L"";
			this->serp1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->serp1->Location = System::Drawing::Point(24, 70);
			this->serp1->Name = L"serp1";
			this->serp1->Size = System::Drawing::Size(111, 22);
			this->serp1->TabIndex = 7;
			// 
			// Scam
			// 
			this->Scam->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Scam->Location = System::Drawing::Point(358, 113);
			this->Scam->Name = L"Scam";
			this->Scam->Size = System::Drawing::Size(84, 50);
			this->Scam->TabIndex = 0;
			this->Scam->Text = L"Поиск";
			this->Scam->UseVisualStyleBackColor = true;
			this->Scam->Click += gcnew System::EventHandler(this, &MyForm::Scam_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1295, 568);
			this->Controls->Add(this->Searchbox);
			this->Controls->Add(this->Table);
			this->Controls->Add(this->letsgo);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->labelll);
			this->Controls->Add(this->filename);
			this->Controls->Add(this->labelavt);
			this->Controls->Add(this->Butt1);
			this->Controls->Add(this->Boxpar);
			this->Controls->Add(this->Boxlog);
			this->Controls->Add(this->labelpar);
			this->Controls->Add(this->labellogin);
			this->Controls->Add(this->contmenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->contmenu;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"База данных";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->contmenu->ResumeLayout(false);
			this->contmenu->PerformLayout();
			this->menu->ResumeLayout(false);
			this->Table->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabl1))->EndInit();
			this->Searchbox->ResumeLayout(false);
			this->Searchbox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void letsgo_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void вернутьсяВМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void Game_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void View1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Scam_Click(System::Object^ sender, System::EventArgs^ e);
};
};