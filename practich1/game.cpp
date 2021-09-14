#include "game.h"
#include <random>
#include <time.h>
int k = 0,j=0;
System::Void practich1::game::вернутьсяВГлавноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Owner->Show();
	this->Close();
}//Режимы сложности
System::Void practich1::game::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	k = 0;
	j = 0;
	this->groupBox1->Visible = true;
	this->groupBox2->Visible = false;
	this->groupBox3->Visible = false;
	this->groupBox1->Location = System::Drawing::Point(0, 38);
	this->timer1->Enabled = true;
	srand(time(NULL));
}
System::Void practich1::game::button2_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	k = 0;
	j = 0;
	this->groupBox1->Visible = true;
	this->groupBox2->Visible = false;
	this->groupBox3->Visible = false;
	this->groupBox1->Location = System::Drawing::Point(0, 38);
	this->timer2->Enabled = true;
	srand(time(NULL));
}
System::Void practich1::game::stage3_Click(System::Object^ sender, System::EventArgs^ e)
{
	k = 0;
	j = 0;
	this->groupBox1->Visible = true;
	this->groupBox2->Visible = false;
	this->groupBox3->Visible = false;
	this->groupBox1->Location = System::Drawing::Point(0, 38);
	this->timer3->Enabled = true;
	srand(time(NULL));
}//Таймеры
System::Void practich1::game::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	int x, y;
	
	if (k == 0) {
		this->label7->Visible = true;
		this->label7->Location = System::Drawing::Point(300, 180);
	}
	if (k == 1) {
		this->label7->Visible = false;
		this->label6->Visible = true;
		this->label6->Location = System::Drawing::Point(300, 180);
	}
	if (k == 2) {
		this->label6->Visible = false;
		this->label5->Visible = true;
		this->label5->Location = System::Drawing::Point(300, 180);
	}
	if (k == 3) {
		this->label5->Visible = false;
		this->label8->Visible = true;
		this->label8->Location = System::Drawing::Point(270, 180);
	}
	if (k == 4) {
		this->label8->Visible = false;
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 6) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 7) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 8) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 9) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 10) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 11) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 12) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 13) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 14) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 15) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 16) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 17) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 18) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 19) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 20) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 21) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 22) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 23) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 24) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 25) {
		this->timer1->Enabled = false;
		this->groupBox3->Visible = true;
		this->groupBox2->Visible = true;
		this->groupBox1->Visible = false;
		if(j<10)
			MessageBox::Show("Иди учи уроки", "НЕПохвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if ((j >= 10) && (j < 15))
			MessageBox::Show("Неплохо для новичка", "Похвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if ((j >= 15) && (j < 20))
			MessageBox::Show("Уверенный пользователь компутера", "Похвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if (j == 20)
			MessageBox::Show("Ты БОГ", "Похвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	k++;
}
System::Void practich1::game::timer2_Tick(System::Object^ sender, System::EventArgs^ e)
{
	int x, y;
	if (k == 0) {
		this->label7->Visible = true;
		this->label7->Location = System::Drawing::Point(300, 180);
	}
	if (k == 1) {
		this->label7->Visible = false;
		this->label6->Visible = true;
		this->label6->Location = System::Drawing::Point(300, 180);
	}
	if (k == 2) {
		this->label6->Visible = false;
		this->label5->Visible = true;
		this->label5->Location = System::Drawing::Point(300, 180);
	}
	if (k == 3) {
		this->label5->Visible = false;
		this->label8->Visible = true;
		this->label8->Location = System::Drawing::Point(270, 180);
	}
	if (k == 4) {
		this->label8->Visible = false;
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 6) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 7) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 8) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 9) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 10) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 11) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 12) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 13) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 14) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 15) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 16) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 17) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 18) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 19) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 20) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 21) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 22) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 23) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 24) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 25) {
		this->timer2->Enabled = false;
		this->groupBox3->Visible = true;
		this->groupBox2->Visible = true;
		this->groupBox1->Visible = false;
		if (j < 10)
			MessageBox::Show("Иди учи уроки", "НЕПохвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if ((j >= 10) && (j < 15))
			MessageBox::Show("Неплохо для новичка", "Похвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if ((j >= 15) && (j < 20))
			MessageBox::Show("Уверенный пользователь компутера", "Похвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if (j == 20)
			MessageBox::Show("Ты БОГ", "Похвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	k++;
}
System::Void practich1::game::timer3_Tick(System::Object^ sender, System::EventArgs^ e)
{
	int x, y;
	if (k == 0) {
		this->label7->Visible = true;
		this->label7->Location = System::Drawing::Point(300, 180);
	}
	if (k == 1) {
		this->label7->Visible = false;
		this->label6->Visible = true;
		this->label6->Location = System::Drawing::Point(300, 180);
	}
	if (k == 2) {
		this->label6->Visible = false;
		this->label5->Visible = true;
		this->label5->Location = System::Drawing::Point(300, 180);
	}
	if (k == 3) {
		this->label5->Visible = false;
		this->label8->Visible = true;
		this->label8->Location = System::Drawing::Point(270, 180);
	}
	if (k == 4) {
		this->label8->Visible = false;
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 6) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 7) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 8) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 9) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 10) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 11) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 12) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 13) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 14) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 15) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 16) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 17) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 18) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 19) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 20) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 21) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 22) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 23) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 24) {
		this->KILL->Visible = true;
		x = rand() % 220;
		y = rand() % 300;
		this->KILL->Location = System::Drawing::Point(y, x);
	}
	if (k == 25) {
		this->timer3->Enabled = false;
		this->groupBox3->Visible = true;
		this->groupBox2->Visible = true;
		this->groupBox1->Visible = false;
		if (j < 10)
			MessageBox::Show("Иди учи уроки", "НЕПохвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if((j>=10)&&(j<15))
			MessageBox::Show("Неплохо для новичка", "Похвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if ((j >= 15)&&(j<20))
			MessageBox::Show("Уверенный пользователь компутера", "Похвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if (j == 20)
			MessageBox::Show("Ты БОГ", "Похвала", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	k++;
}
System::Void practich1::game::game_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->groupBox3->Location = System::Drawing::Point(0, 32);
	this->groupBox2->Location = System::Drawing::Point(281, 32);
	int k = 0;
}//Попадание по кнопке
System::Void practich1::game::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->KILL->Visible = false;
	j++;
}
