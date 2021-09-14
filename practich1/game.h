#pragma once
namespace practich1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// —водка дл€ game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьс€¬√лавноећенюToolStripMenuItem;
	private: System::Windows::Forms::Button^ stage1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ KILL;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ stage2;
	private: System::Windows::Forms::Button^ stage3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Label^ label9;
	private: System::ComponentModel::IContainer^ components;
	protected:
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вернутьс€¬√лавноећенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stage1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->KILL = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->stage2 = (gcnew System::Windows::Forms::Button());
			this->stage3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->вернутьс€¬√лавноећенюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(619, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вернутьс€¬√лавноећенюToolStripMenuItem
			// 
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Name = L"вернутьс€¬√лавноећенюToolStripMenuItem";
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Size = System::Drawing::Size(166, 20);
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Text = L"¬ернутьс€ в главное меню";
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &game::вернутьс€¬√лавноећенюToolStripMenuItem_Click);
			// 
			// stage1
			// 
			this->stage1->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->stage1->Location = System::Drawing::Point(99, 95);
			this->stage1->Name = L"stage1";
			this->stage1->Size = System::Drawing::Size(104, 44);
			this->stage1->TabIndex = 5;
			this->stage1->Text = L"“олько проснулс€";
			this->stage1->UseVisualStyleBackColor = true;
			this->stage1->Click += gcnew System::EventHandler(this, &game::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &game::timer1_Tick);
			// 
			// KILL
			// 
			this->KILL->BackColor = System::Drawing::Color::Red;
			this->KILL->ForeColor = System::Drawing::Color::Red;
			this->KILL->Location = System::Drawing::Point(458, 53);
			this->KILL->Name = L"KILL";
			this->KILL->Size = System::Drawing::Size(50, 50);
			this->KILL->TabIndex = 6;
			this->KILL->UseVisualStyleBackColor = false;
			this->KILL->Visible = false;
			this->KILL->Click += gcnew System::EventHandler(this, &game::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::GreenYellow;
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->KILL);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->ForeColor = System::Drawing::Color::Chartreuse;
			this->groupBox1->Location = System::Drawing::Point(354, 274);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(619, 387);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Maroon;
			this->label7->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(297, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 33);
			this->label7->TabIndex = 18;
			this->label7->Text = L"3";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::DarkRed;
			this->label6->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 33);
			this->label6->TabIndex = 17;
			this->label6->Text = L"2";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Firebrick;
			this->label8->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(28, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 33);
			this->label8->TabIndex = 19;
			this->label8->Text = L"START";
			this->label8->Visible = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Red;
			this->label5->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(155, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 33);
			this->label5->TabIndex = 16;
			this->label5->Text = L"1";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(6, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"EYE";
			// 
			// stage2
			// 
			this->stage2->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stage2->Location = System::Drawing::Point(99, 169);
			this->stage2->Name = L"stage2";
			this->stage2->Size = System::Drawing::Size(104, 44);
			this->stage2->TabIndex = 9;
			this->stage2->Text = L"—илач";
			this->stage2->UseVisualStyleBackColor = true;
			this->stage2->Click += gcnew System::EventHandler(this, &game::button2_Click_1);
			// 
			// stage3
			// 
			this->stage3->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->stage3->Location = System::Drawing::Point(99, 242);
			this->stage3->Name = L"stage3";
			this->stage3->Size = System::Drawing::Size(104, 44);
			this->stage3->TabIndex = 10;
			this->stage3->Text = L"јƒ";
			this->stage3->UseVisualStyleBackColor = true;
			this->stage3->Click += gcnew System::EventHandler(this, &game::stage3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(293, 23);
			this->label2->TabIndex = 11;
			this->label2->Text = L"¬ыберите уровень сложности";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Maroon;
			this->label3->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(26, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 57);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Ёто игра дл€ \r\nразминки глаз и \r\nусилени€ вашей реакции";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::DimGray;
			this->groupBox2->Controls->Add(this->stage1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->stage3);
			this->groupBox2->Controls->Add(this->stage2);
			this->groupBox2->Location = System::Drawing::Point(594, 64);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(301, 314);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Maroon;
			this->label4->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(41, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 25);
			this->label4->TabIndex = 14;
			this->label4->Text = L"AIM";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Black;
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(12, 361);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(281, 317);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 500;
			this->timer2->Tick += gcnew System::EventHandler(this, &game::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 350;
			this->timer3->Tick += gcnew System::EventHandler(this, &game::timer3_Tick);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Maroon;
			this->label9->Font = (gcnew System::Drawing::Font(L"AmazObitaemOstrovFine", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(26, 200);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(232, 57);
			this->label9->TabIndex = 15;
			this->label9->Text = L"¬ ней вы должны кликать \r\nпо красной кнопке\r\nи зарабатывать очки\r\n";
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(619, 423);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->MaximizeBox = false;
			this->Name = L"game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"game";
			this->Load += gcnew System::EventHandler(this, &game::game_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void вернутьс€¬√лавноећенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void stage3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void game_Load(System::Object^ sender, System::EventArgs^ e);
};
}