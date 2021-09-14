#pragma once
namespace practich1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Plus;
	private: System::Windows::Forms::Button^ minidel;
	private: System::Windows::Forms::Button^ changedel;
	protected:
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьсяВГлавноеМенюToolStripMenuItem;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::GroupBox^ changemenu;
	private: System::Windows::Forms::DataGridView^ Table2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Numb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Namestreet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ housenumb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ size;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ floors;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ rooms;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ peoples;
	private: System::Windows::Forms::Button^ Accept;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Name4;
	private: System::Windows::Forms::TextBox^ Name7;
	private: System::Windows::Forms::TextBox^ Name6;
	private: System::Windows::Forms::TextBox^ Name5;
	private: System::Windows::Forms::TextBox^ Name3;
	private: System::Windows::Forms::TextBox^ Name2;
	private: System::Windows::Forms::TextBox^ Name1;
	private: System::Windows::Forms::GroupBox^ Box2;
	private: System::Windows::Forms::TextBox^ delek;
	private: System::Windows::Forms::Button^ butdel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ Box1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ Changer;
	private: System::Windows::Forms::Button^ changerbut;
	private: System::Windows::Forms::TextBox^ CHBox8;
	private: System::Windows::Forms::TextBox^ CHBox7;
	private: System::Windows::Forms::TextBox^ CHBox6;
	private: System::Windows::Forms::TextBox^ CHBox5;
	private: System::Windows::Forms::TextBox^ CHBox4;
	private: System::Windows::Forms::TextBox^ CHBox3;
	private: System::Windows::Forms::TextBox^ CHBox2;
	private: System::Windows::Forms::TextBox^ CHBox1;
	private: System::Windows::Forms::Label^ label4;
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
			this->Plus = (gcnew System::Windows::Forms::Button());
			this->minidel = (gcnew System::Windows::Forms::Button());
			this->changedel = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вернутьсяВГлавноеМенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->changemenu = (gcnew System::Windows::Forms::GroupBox());
			this->Changer = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->changerbut = (gcnew System::Windows::Forms::Button());
			this->CHBox8 = (gcnew System::Windows::Forms::TextBox());
			this->CHBox7 = (gcnew System::Windows::Forms::TextBox());
			this->CHBox6 = (gcnew System::Windows::Forms::TextBox());
			this->CHBox5 = (gcnew System::Windows::Forms::TextBox());
			this->CHBox4 = (gcnew System::Windows::Forms::TextBox());
			this->CHBox3 = (gcnew System::Windows::Forms::TextBox());
			this->CHBox2 = (gcnew System::Windows::Forms::TextBox());
			this->CHBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Box2 = (gcnew System::Windows::Forms::GroupBox());
			this->delek = (gcnew System::Windows::Forms::TextBox());
			this->butdel = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Box1 = (gcnew System::Windows::Forms::GroupBox());
			this->Accept = (gcnew System::Windows::Forms::Button());
			this->Name1 = (gcnew System::Windows::Forms::TextBox());
			this->Name7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Name6 = (gcnew System::Windows::Forms::TextBox());
			this->Name4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Name5 = (gcnew System::Windows::Forms::TextBox());
			this->Name2 = (gcnew System::Windows::Forms::TextBox());
			this->Name3 = (gcnew System::Windows::Forms::TextBox());
			this->Table2 = (gcnew System::Windows::Forms::DataGridView());
			this->Numb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Namestreet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->housenumb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->size = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->floors = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rooms = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->peoples = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->changemenu->SuspendLayout();
			this->Changer->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->Box2->SuspendLayout();
			this->Box1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table2))->BeginInit();
			this->SuspendLayout();
			// 
			// Plus
			// 
			this->Plus->Location = System::Drawing::Point(6, 13);
			this->Plus->Name = L"Plus";
			this->Plus->Size = System::Drawing::Size(146, 36);
			this->Plus->TabIndex = 0;
			this->Plus->Text = L"Добавить данные";
			this->Plus->UseVisualStyleBackColor = true;
			this->Plus->Click += gcnew System::EventHandler(this, &MyForm1::Plus_Click);
			// 
			// minidel
			// 
			this->minidel->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minidel->Location = System::Drawing::Point(6, 68);
			this->minidel->Name = L"minidel";
			this->minidel->Size = System::Drawing::Size(146, 36);
			this->minidel->TabIndex = 1;
			this->minidel->Text = L"Удалить строку данных";
			this->minidel->UseVisualStyleBackColor = true;
			this->minidel->Click += gcnew System::EventHandler(this, &MyForm1::minidel_Click);
			// 
			// changedel
			// 
			this->changedel->Location = System::Drawing::Point(6, 124);
			this->changedel->Name = L"changedel";
			this->changedel->Size = System::Drawing::Size(146, 36);
			this->changedel->TabIndex = 2;
			this->changedel->Text = L"Изменить данные";
			this->changedel->UseVisualStyleBackColor = true;
			this->changedel->Click += gcnew System::EventHandler(this, &MyForm1::changedel_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->вернутьсяВГлавноеМенюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(917, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вернутьсяВГлавноеМенюToolStripMenuItem
			// 
			this->вернутьсяВГлавноеМенюToolStripMenuItem->Name = L"вернутьсяВГлавноеМенюToolStripMenuItem";
			this->вернутьсяВГлавноеМенюToolStripMenuItem->Size = System::Drawing::Size(166, 20);
			this->вернутьсяВГлавноеМенюToolStripMenuItem->Text = L"Вернуться в главное меню";
			this->вернутьсяВГлавноеМенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::вернутьсяВГлавноеМенюToolStripMenuItem_Click);
			// 
			// clear
			// 
			this->clear->Location = System::Drawing::Point(6, 177);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(146, 36);
			this->clear->TabIndex = 4;
			this->clear->Text = L"Очистить базу";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm1::clear_Click);
			// 
			// changemenu
			// 
			this->changemenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->changemenu->Controls->Add(this->Changer);
			this->changemenu->Controls->Add(this->Back);
			this->changemenu->Controls->Add(this->button2);
			this->changemenu->Controls->Add(this->groupBox2);
			this->changemenu->Controls->Add(this->Box2);
			this->changemenu->Controls->Add(this->Box1);
			this->changemenu->Controls->Add(this->Table2);
			this->changemenu->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changemenu->Location = System::Drawing::Point(12, 27);
			this->changemenu->Name = L"changemenu";
			this->changemenu->Size = System::Drawing::Size(893, 423);
			this->changemenu->TabIndex = 5;
			this->changemenu->TabStop = false;
			this->changemenu->Text = L"Изменение базы";
			// 
			// Changer
			// 
			this->Changer->Controls->Add(this->label4);
			this->Changer->Controls->Add(this->changerbut);
			this->Changer->Controls->Add(this->CHBox8);
			this->Changer->Controls->Add(this->CHBox7);
			this->Changer->Controls->Add(this->CHBox6);
			this->Changer->Controls->Add(this->CHBox5);
			this->Changer->Controls->Add(this->CHBox4);
			this->Changer->Controls->Add(this->CHBox3);
			this->Changer->Controls->Add(this->CHBox2);
			this->Changer->Controls->Add(this->CHBox1);
			this->Changer->Font = (gcnew System::Drawing::Font(L"Chocolate cyr-lat", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Changer->Location = System::Drawing::Point(281, 373);
			this->Changer->Name = L"Changer";
			this->Changer->Size = System::Drawing::Size(597, 123);
			this->Changer->TabIndex = 20;
			this->Changer->TabStop = false;
			this->Changer->Text = L"Изменение";
			this->Changer->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(419, 24);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Заполните нужные поля, остальные оставьте без изменений";
			// 
			// changerbut
			// 
			this->changerbut->BackColor = System::Drawing::SystemColors::Info;
			this->changerbut->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changerbut->Location = System::Drawing::Point(520, 57);
			this->changerbut->Name = L"changerbut";
			this->changerbut->Size = System::Drawing::Size(71, 42);
			this->changerbut->TabIndex = 18;
			this->changerbut->Text = L"Изменить";
			this->changerbut->UseVisualStyleBackColor = false;
			this->changerbut->Click += gcnew System::EventHandler(this, &MyForm1::changerbut_Click);
			// 
			// CHBox8
			// 
			this->CHBox8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHBox8->Location = System::Drawing::Point(417, 90);
			this->CHBox8->Name = L"CHBox8";
			this->CHBox8->Size = System::Drawing::Size(100, 22);
			this->CHBox8->TabIndex = 17;
			this->CHBox8->Text = L"Номер строчки";
			this->CHBox8->Click += gcnew System::EventHandler(this, &MyForm1::textBox8_Click);
			this->CHBox8->Leave += gcnew System::EventHandler(this, &MyForm1::textBox8_Leave);
			// 
			// CHBox7
			// 
			this->CHBox7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHBox7->Location = System::Drawing::Point(299, 90);
			this->CHBox7->Name = L"CHBox7";
			this->CHBox7->Size = System::Drawing::Size(100, 22);
			this->CHBox7->TabIndex = 16;
			this->CHBox7->Text = L"Люди";
			this->CHBox7->Click += gcnew System::EventHandler(this, &MyForm1::textBox7_Click);
			this->CHBox7->Leave += gcnew System::EventHandler(this, &MyForm1::textBox7_Leave);
			// 
			// CHBox6
			// 
			this->CHBox6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHBox6->Location = System::Drawing::Point(175, 90);
			this->CHBox6->Name = L"CHBox6";
			this->CHBox6->Size = System::Drawing::Size(100, 22);
			this->CHBox6->TabIndex = 15;
			this->CHBox6->Text = L"Комнаты";
			this->CHBox6->Click += gcnew System::EventHandler(this, &MyForm1::textBox6_Click);
			this->CHBox6->Leave += gcnew System::EventHandler(this, &MyForm1::textBox6_Leave);
			// 
			// CHBox5
			// 
			this->CHBox5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHBox5->Location = System::Drawing::Point(40, 90);
			this->CHBox5->Name = L"CHBox5";
			this->CHBox5->Size = System::Drawing::Size(100, 22);
			this->CHBox5->TabIndex = 14;
			this->CHBox5->Text = L"Этажи";
			this->CHBox5->Click += gcnew System::EventHandler(this, &MyForm1::textBox5_Click);
			this->CHBox5->Leave += gcnew System::EventHandler(this, &MyForm1::textBox5_Leave);
			// 
			// CHBox4
			// 
			this->CHBox4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHBox4->Location = System::Drawing::Point(417, 49);
			this->CHBox4->Name = L"CHBox4";
			this->CHBox4->Size = System::Drawing::Size(97, 22);
			this->CHBox4->TabIndex = 13;
			this->CHBox4->Text = L"Размер";
			this->CHBox4->Click += gcnew System::EventHandler(this, &MyForm1::textBox4_Click);
			this->CHBox4->Leave += gcnew System::EventHandler(this, &MyForm1::textBox4_Leave);
			// 
			// CHBox3
			// 
			this->CHBox3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHBox3->Location = System::Drawing::Point(299, 49);
			this->CHBox3->Name = L"CHBox3";
			this->CHBox3->Size = System::Drawing::Size(100, 22);
			this->CHBox3->TabIndex = 9;
			this->CHBox3->Text = L"Год";
			this->CHBox3->Click += gcnew System::EventHandler(this, &MyForm1::textBox3_Click);
			this->CHBox3->Leave += gcnew System::EventHandler(this, &MyForm1::textBox3_Leave);
			// 
			// CHBox2
			// 
			this->CHBox2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHBox2->Location = System::Drawing::Point(175, 49);
			this->CHBox2->Name = L"CHBox2";
			this->CHBox2->Size = System::Drawing::Size(100, 22);
			this->CHBox2->TabIndex = 8;
			this->CHBox2->Text = L"Номер дома";
			this->CHBox2->Click += gcnew System::EventHandler(this, &MyForm1::textBox2_Click);
			this->CHBox2->Leave += gcnew System::EventHandler(this, &MyForm1::textBox2_Leave);
			// 
			// CHBox1
			// 
			this->CHBox1->AccessibleDescription = L"";
			this->CHBox1->AccessibleName = L"";
			this->CHBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CHBox1->Location = System::Drawing::Point(40, 49);
			this->CHBox1->Name = L"CHBox1";
			this->CHBox1->Size = System::Drawing::Size(111, 22);
			this->CHBox1->TabIndex = 7;
			this->CHBox1->Text = L"Название улицы";
			this->CHBox1->Click += gcnew System::EventHandler(this, &MyForm1::textBox1_Click);
			this->CHBox1->Leave += gcnew System::EventHandler(this, &MyForm1::textBox1_Leave);
			// 
			// Back
			// 
			this->Back->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Back->Location = System::Drawing::Point(26, 331);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(146, 44);
			this->Back->TabIndex = 19;
			this->Back->Text = L"Вернуться к меню изменений";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Visible = false;
			this->Back->Click += gcnew System::EventHandler(this, &MyForm1::Back_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(26, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(0, 0);
			this->button2->TabIndex = 18;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Plus);
			this->groupBox2->Controls->Add(this->minidel);
			this->groupBox2->Controls->Add(this->changedel);
			this->groupBox2->Controls->Add(this->clear);
			this->groupBox2->Location = System::Drawing::Point(20, 46);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(156, 224);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			// 
			// Box2
			// 
			this->Box2->Controls->Add(this->delek);
			this->Box2->Controls->Add(this->butdel);
			this->Box2->Controls->Add(this->label3);
			this->Box2->Location = System::Drawing::Point(865, 281);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(347, 69);
			this->Box2->TabIndex = 16;
			this->Box2->TabStop = false;
			this->Box2->Visible = false;
			// 
			// delek
			// 
			this->delek->Location = System::Drawing::Point(185, 27);
			this->delek->Name = L"delek";
			this->delek->Size = System::Drawing::Size(42, 23);
			this->delek->TabIndex = 2;
			// 
			// butdel
			// 
			this->butdel->BackColor = System::Drawing::SystemColors::GrayText;
			this->butdel->Location = System::Drawing::Point(250, 22);
			this->butdel->Name = L"butdel";
			this->butdel->Size = System::Drawing::Size(75, 36);
			this->butdel->TabIndex = 1;
			this->butdel->Text = L"Удалить";
			this->butdel->UseVisualStyleBackColor = false;
			this->butdel->Click += gcnew System::EventHandler(this, &MyForm1::butdel_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 32);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Введите номер строчки, \r\nкоторую хотите удалить";
			// 
			// Box1
			// 
			this->Box1->Controls->Add(this->Accept);
			this->Box1->Controls->Add(this->Name1);
			this->Box1->Controls->Add(this->Name7);
			this->Box1->Controls->Add(this->label1);
			this->Box1->Controls->Add(this->Name6);
			this->Box1->Controls->Add(this->Name4);
			this->Box1->Controls->Add(this->label2);
			this->Box1->Controls->Add(this->Name5);
			this->Box1->Controls->Add(this->Name2);
			this->Box1->Controls->Add(this->Name3);
			this->Box1->Location = System::Drawing::Point(194, 410);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(644, 119);
			this->Box1->TabIndex = 15;
			this->Box1->TabStop = false;
			this->Box1->Visible = false;
			// 
			// Accept
			// 
			this->Accept->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Accept->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Accept->Location = System::Drawing::Point(405, 76);
			this->Accept->Name = L"Accept";
			this->Accept->Size = System::Drawing::Size(97, 26);
			this->Accept->TabIndex = 1;
			this->Accept->Text = L"Ввод";
			this->Accept->UseVisualStyleBackColor = false;
			this->Accept->Click += gcnew System::EventHandler(this, &MyForm1::Accept_Click);
			// 
			// Name1
			// 
			this->Name1->AccessibleDescription = L"";
			this->Name1->AccessibleName = L"";
			this->Name1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name1->Location = System::Drawing::Point(43, 31);
			this->Name1->Name = L"Name1";
			this->Name1->Size = System::Drawing::Size(111, 22);
			this->Name1->TabIndex = 6;
			this->Name1->Text = L"Название улицы";
			this->Name1->Click += gcnew System::EventHandler(this, &MyForm1::Name1_Click);
			this->Name1->Leave += gcnew System::EventHandler(this, &MyForm1::Box1_Leave);
			// 
			// Name7
			// 
			this->Name7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name7->Location = System::Drawing::Point(290, 76);
			this->Name7->Name = L"Name7";
			this->Name7->Size = System::Drawing::Size(100, 22);
			this->Name7->TabIndex = 11;
			this->Name7->Text = L"Люди";
			this->Name7->Click += gcnew System::EventHandler(this, &MyForm1::Name7_Click);
			this->Name7->Leave += gcnew System::EventHandler(this, &MyForm1::Name7_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Chocolate cyr-lat", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 20);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Количество";
			// 
			// Name6
			// 
			this->Name6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name6->Location = System::Drawing::Point(171, 76);
			this->Name6->Name = L"Name6";
			this->Name6->Size = System::Drawing::Size(100, 22);
			this->Name6->TabIndex = 10;
			this->Name6->Text = L"Комнаты";
			this->Name6->Click += gcnew System::EventHandler(this, &MyForm1::Name6_Click);
			this->Name6->Leave += gcnew System::EventHandler(this, &MyForm1::Name6_MouseLeave);
			// 
			// Name4
			// 
			this->Name4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name4->Location = System::Drawing::Point(405, 31);
			this->Name4->Name = L"Name4";
			this->Name4->Size = System::Drawing::Size(97, 22);
			this->Name4->TabIndex = 12;
			this->Name4->Text = L"Размер";
			this->Name4->Click += gcnew System::EventHandler(this, &MyForm1::Name4_Click);
			this->Name4->Leave += gcnew System::EventHandler(this, &MyForm1::Name4_MouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Chocolate cyr-lat", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(20, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(264, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Введите значения, которые хотите добавить";
			// 
			// Name5
			// 
			this->Name5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name5->Location = System::Drawing::Point(43, 76);
			this->Name5->Name = L"Name5";
			this->Name5->Size = System::Drawing::Size(100, 22);
			this->Name5->TabIndex = 9;
			this->Name5->Text = L"Этажи";
			this->Name5->Click += gcnew System::EventHandler(this, &MyForm1::Name5_Click);
			this->Name5->Leave += gcnew System::EventHandler(this, &MyForm1::Name5_MouseLeave);
			// 
			// Name2
			// 
			this->Name2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name2->Location = System::Drawing::Point(171, 31);
			this->Name2->Name = L"Name2";
			this->Name2->Size = System::Drawing::Size(100, 22);
			this->Name2->TabIndex = 7;
			this->Name2->Text = L"Номер дома";
			this->Name2->Click += gcnew System::EventHandler(this, &MyForm1::Name2_Click);
			this->Name2->Leave += gcnew System::EventHandler(this, &MyForm1::Name2_MouseLeave);
			// 
			// Name3
			// 
			this->Name3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name3->Location = System::Drawing::Point(290, 31);
			this->Name3->Name = L"Name3";
			this->Name3->Size = System::Drawing::Size(100, 22);
			this->Name3->TabIndex = 8;
			this->Name3->Text = L"Год";
			this->Name3->Click += gcnew System::EventHandler(this, &MyForm1::Name3_Click);
			this->Name3->Leave += gcnew System::EventHandler(this, &MyForm1::Name3_MouseLeave);
			// 
			// Table2
			// 
			this->Table2->AllowUserToAddRows = false;
			this->Table2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Numb, this->Namestreet,
					this->housenumb, this->year, this->size, this->floors, this->rooms, this->peoples
			});
			this->Table2->Location = System::Drawing::Point(218, 46);
			this->Table2->Name = L"Table2";
			this->Table2->RowHeadersVisible = false;
			this->Table2->Size = System::Drawing::Size(644, 224);
			this->Table2->TabIndex = 0;
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
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(917, 462);
			this->Controls->Add(this->changemenu);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Изменение данных";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->changemenu->ResumeLayout(false);
			this->Changer->ResumeLayout(false);
			this->Changer->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->Box2->ResumeLayout(false);
			this->Box2->PerformLayout();
			this->Box1->ResumeLayout(false);
			this->Box1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void вернутьсяВГлавноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Plus_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void minidel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Box1_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name2_MouseLeave(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name4_MouseLeave(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name5_MouseLeave(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name6_MouseLeave(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Name7_MouseLeave(System::Object^ sender, System::EventArgs^ e);
private: System::Void Accept_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void butdel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox5_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox6_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox7_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox8_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void changedel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void changerbut_Click(System::Object^ sender, System::EventArgs^ e);
};
}