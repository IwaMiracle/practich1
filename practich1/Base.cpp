#define _CRT_SECURE_NO_WARNINGS
#include "Base.h"
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "Change.h"
#include "game.h"
#include "Head.h"
Boolean flag;
FILE* filen;
FILE* jojos;
char* name;
boolean baza,flagadm=false;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    practich1::MyForm form;
    Application::Run(% form);
}
System::Void practich1::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->ClientSize = System::Drawing::Size(289, 260);
	flag = false;
	this->labelavt->Location = System::Drawing::Point(88, 62);
	this->labelpar->Location = System::Drawing::Point(12, 145);
	this->labellogin->Location = System::Drawing::Point(12, 106);
	this->Boxlog->Location = System::Drawing::Point(56, 103);
	this->Boxpar->Location = System::Drawing::Point(56, 145);
	this->Butt1->Location = System::Drawing::Point(104, 181);
}//Вход
System::Void practich1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Boxlog->Text == L"Admin")
	{
		if (Boxpar->Text == L"12345")
		{
			MessageBox::Show("Вы вошли как Админ", "Авторизация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			flagadm = true;
			this->Changes->Enabled = true;
		}
		else
		{
			MessageBox::Show("Вы ввели неверный пароль админа", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	if ((Boxlog->Text == L"") && (Boxpar->Text == L"")&& (Boxlog->Text == L"Admin"))
	{
		MessageBox::Show("Вы не ввели логин и пароль", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
		if (Boxlog->Text == L"")
		{
			MessageBox::Show("Вы не ввели логин", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
			if (Boxpar->Text == L"")
			{
				MessageBox::Show("Вы не ввели пароль", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				flag = true;
			}
	if ((flag == true)||(flagadm==true))
	{
		this->labelavt->Visible = false;
		this->labellogin->Visible = false;
		this->labelpar->Visible = false;
		this->Boxpar->Visible = false;
		this->Boxlog->Visible = false;
		this->Butt1->Visible = false;
		this->ClientSize = System::Drawing::Size(345, 177);
		this->labelll->Location = System::Drawing::Point(77, 35);
		this->filename->Location = System::Drawing::Point(66, 66);
		this->letsgo->Location = System::Drawing::Point(130, 110);
		this->filename->Visible = true;
		this->labelll->Visible = true;
		this->letsgo->Visible = true;
	}
}//Ввод файла
System::Void practich1::MyForm::letsgo_Click(System::Object^ sender, System::EventArgs^ e)
{
	name = Convert_String_to_char(filename->Text->ToString());
	filen = fopen("TEXTNAME.txt", "w");
	fprintf(filen, "%-16.16s\n", name);
	fclose(filen);
	filen=fopen(name, "r");
	if (filen == NULL)
	{
		System::Windows::Forms::DialogResult what = MessageBox::Show("Такого файла не существует.Создать новый файл?", "Ошибка", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
		if (what == System::Windows::Forms::DialogResult::OK)
			filen = fopen("DataBase.txt", "w");
		else
			filename->Text=L"";
	}
	fclose(filen);
	flag = false;
	if (filename->Text == L"")
	{
		MessageBox::Show("Вы не ввели имя файла", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		char con[5] = ".con", prn[5] = ".prn", check[5];
		char names[17], number[6], years[7];
		int strok, size, kole, kolk, kolp,n=1;
		float price;
		for (int i = strlen(name) - 4; i < strlen(name); i++)
		{
			check[i - strlen(name) + 4] = name[i];
		}
		check[4] = '\0';
		if ((strcmp(check, con)) == 0 || (strcmp(check, prn)) == 0)
		{
			MessageBox::Show("Вы ввели запрещённое имя файла.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			flag = false;
			this->filename->Text = L"";
		}
		else
			flag = true;
		if (flag == true)
		{
			filen = fopen(name, "a");//Открытие файла для записи
			if (filen == NULL)//Файл не открылся
				MessageBox::Show("Файл не открылся!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			else
				flag = true;
			fclose(filen);
			//Проверка на наличие в файле базы данныз
			filen = fopen(name, "r");
			if (getc(filen) == EOF)//Базы данных нет в файле
			{
				MessageBox::Show("В файле нет базы данных!", "Проверка", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else//Базы данных есть в файле
			{
				MessageBox::Show("В файле есть база данных!", "Проверка", MessageBoxButtons::OK, MessageBoxIcon::Information);
				strok = 0;
				while (fscanf(filen, "%16s%5s%6s%5d%4d%5d%6d", names, number, years, &size, &kole,&kolk,&kolp) != EOF)//Подсчёт строк в файле
				{
					strok++;
				}
				fclose(filen);
				
			}
			fclose(filen);
		}
	}
	if (flag==true)
	{
		this->filename->Visible = false;
		this->labelll->Visible = false;
		this->letsgo->Visible = false;
		this->ClientSize = System::Drawing::Size(440, 400);
		this->menu->Location = System::Drawing::Point(12, 31);
		this->contmenu->Visible = true;
		this->menu->Visible = true;
	}
}//Справка
System::Void practich1::MyForm::справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Это база данных", "Справка", MessageBoxButtons::OK, MessageBoxIcon::Information);
}//Закрытие программы
System::Void practich1::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}//Открытие новой формы
System::Void practich1::MyForm::button1_Click_1(System::Object^ sender, System::EventArgs^ e)
{
			MyForm1^ f2 = gcnew MyForm1();
			f2->Owner = this;
			f2->Show();
			this->Hide();
}//Возврат в главное меню
System::Void practich1::MyForm::вернутьсяВМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->ClientSize = System::Drawing::Size(440, 400);
	this->menu->Location = System::Drawing::Point(12, 31);
	this->contmenu->Visible = true;
	this->menu->Visible = true;
	this->Table->Visible = false;
	this->Searchbox->Visible = false;
}
System::Void practich1::MyForm::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	return System::Void();
}//ИГРА
System::Void practich1::MyForm::Game_Click(System::Object^ sender, System::EventArgs^ e)
{
	game^ f3 = gcnew game();
	f3->Owner = this;
	f3->Show();
	this->Hide();
}
System::Void practich1::MyForm::Search_Click(System::Object^ sender, System::EventArgs^ e)
{
	int sizer, kolre, kolrk, kolrp, n;
	char rnames[17], numbers[6], yearss[7];
	filen = fopen(name, "r");
	n = 1;
	while (Tabl1->Rows->Count != 0) {
		Tabl1->Rows->Remove(Tabl1->Rows[Tabl1->Rows->Count - 1]);
	}
	while (fscanf(filen, "%16s%5s%6s%5d%4d%5d%6d", rnames, numbers, yearss, &sizer, &kolre, &kolrk, &kolrp) != EOF)
	{
		this->Tabl1->Rows->Add();
		this->Tabl1->Rows[n - 1]->Cells[0]->Value = n;
		this->Tabl1->Rows[n - 1]->Cells[1]->Value = Convert_char_to_String(rnames);;
		this->Tabl1->Rows[n - 1]->Cells[2]->Value = Convert_char_to_String(numbers);
		this->Tabl1->Rows[n - 1]->Cells[3]->Value = Convert_char_to_String(yearss);
		this->Tabl1->Rows[n - 1]->Cells[4]->Value = sizer;
		this->Tabl1->Rows[n - 1]->Cells[5]->Value = kolre;
		this->Tabl1->Rows[n - 1]->Cells[6]->Value = kolrk;
		this->Tabl1->Rows[n - 1]->Cells[7]->Value = kolrp;
		n++;
	}
	fclose(filen);
	this->ClientSize = System::Drawing::Size(770, 534);
	this->Table->Location = System::Drawing::Point(20, 32);
	this->Table->Visible = true;
	this->Searchbox->Location = System::Drawing::Point(56, 310);
	this->Searchbox->Visible = true;
	this->menu->Visible = false;
}//Просмотр базы данных
System::Void practich1::MyForm::View1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->ClientSize = System::Drawing::Size(782, 366);
	this->Table->Location = System::Drawing::Point(20, 32);
	this->menu->Visible = false;
	this->Table->Visible = true;
	int sizer, kolre, kolrk, kolrp, n;
	char rnames[17], numbers[6], yearss[7];
	filen = fopen(name, "r");
	n = 1;
	while (Tabl1->Rows->Count != 0) {
		Tabl1->Rows->Remove(Tabl1->Rows[Tabl1->Rows->Count - 1]);
	}
	while (fscanf(filen, "%16s%5s%6s%5d%4d%5d%6d", rnames, numbers, yearss, &sizer, &kolre, &kolrk, &kolrp) != EOF)
	{
		this->Tabl1->Rows->Add();
		this->Tabl1->Rows[n - 1]->Cells[0]->Value = n;
		this->Tabl1->Rows[n - 1]->Cells[1]->Value = Convert_char_to_String(rnames);;
		this->Tabl1->Rows[n - 1]->Cells[2]->Value = Convert_char_to_String(numbers);
		this->Tabl1->Rows[n - 1]->Cells[3]->Value = Convert_char_to_String(yearss);
		this->Tabl1->Rows[n - 1]->Cells[4]->Value = sizer;
		this->Tabl1->Rows[n - 1]->Cells[5]->Value = kolre;
		this->Tabl1->Rows[n - 1]->Cells[6]->Value = kolrk;
		this->Tabl1->Rows[n - 1]->Cells[7]->Value = kolrp;
		n++;
	}
	fclose(filen);
}//Поиск
System::Void practich1::MyForm::Scam_Click(System::Object^ sender, System::EventArgs^ e)
{
	int checker,anyone=0;
	int sizer_check, kolre_check, kolrk_check, kolrp_check;
	char rnames_check[17], numbers_check[6], yearss_check[7];
	char* name_checker, *numb_checker, *year_checker;
	int size_checker, kole_checker, kolp_checker, kolk_checker;
	if (this->serp1->Text != L"")
	{
	name_checker = Convert_String_to_char(serp1->Text);
	}
	if (this->serp2->Text != L"")
	{
	numb_checker = Convert_String_to_char(serp2->Text);
	}
	if (this->serp3->Text != L"")
	{
	year_checker = Convert_String_to_char(serp3->Text);
	}
	if (this->serp4->Text != L"")
	{
		size_checker = Convert::ToInt64(serp4->Text);
	}
	if (this->serp5->Text != L"")
	{
		kole_checker = Convert::ToInt64(serp5->Text);
	}
	if (this->serp6->Text != L"")
	{
		kolk_checker = Convert::ToInt64(serp6->Text);
	}
	if (this->serp7->Text != L"")
	{
		kolp_checker = Convert::ToInt64(serp7->Text);
	}
	filen = fopen(name, "r");
	jojos = fopen("HELPER.txt", "w");
	fclose(jojos);
	while (fscanf(filen, "%16s%5s%6s%5d%4d%5d%6d", rnames_check, numbers_check, yearss_check, &sizer_check, &kolre_check, &kolrk_check, &kolrp_check) != EOF)
	{
		checker = 1;
		if (this->serp1->Text != L"")
		{
			if (strcmp(name_checker,rnames_check)!=0)
			{
				checker = 0;
			}
		}
		if (this->serp2->Text != L"")
		{
			if (strcmp(numb_checker, numbers_check)!=0)
			{
				checker = 0;
			}
		}
		if (this->serp3->Text != L"")
		{
			if (strcmp(year_checker, yearss_check)!=0)
			{
				checker = 0;
			}
		}
		if (this->serp4->Text != L"")
		{
			if (size_checker != sizer_check)
			{
				checker = 0;
			}
		}
		if (this->serp5->Text != L"")
		{
			if (kole_checker != kolre_check)
			{
				checker = 0;
			}
		}
		if (this->serp6->Text != L"")
		{
			if (kolk_checker != kolrk_check)
			{
				checker = 0;
			}
		}
		if (this->serp7->Text != L"")
		{
			if (kolp_checker != kolrp_check)
			{
				checker = 0;
			}
		}
		if (checker == 1)
		{
			jojos = fopen("HELPER.txt", "a");
			fprintf(jojos, "%-16.16s%-5.5s%-6.6s%-5d%-4d%-5d%-7d\n", rnames_check, numbers_check, yearss_check, sizer_check, kolre_check, kolrk_check, kolrp_check);
			anyone = 1;
			fclose(jojos);
		}
	}
	fclose(filen);
	int sizer, kolre, kolrk, kolrp, n;
	char rnames[17], numbers[6], yearss[7];
	jojos = fopen("HELPER.txt", "r");
	n = 1;
	while (Tabl1->Rows->Count != 0) {
		Tabl1->Rows->Remove(Tabl1->Rows[Tabl1->Rows->Count - 1]);
	}
	if (anyone == 0)
	{
		MessageBox::Show("Схожих результатов не найдено", "Проверка", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		while (fscanf(jojos, "%16s%5s%6s%5d%4d%5d%6d", rnames, numbers, yearss, &sizer, &kolre, &kolrk, &kolrp) != EOF)
		{
			this->Tabl1->Rows->Add();
			this->Tabl1->Rows[n - 1]->Cells[0]->Value = n;
			this->Tabl1->Rows[n - 1]->Cells[1]->Value = Convert_char_to_String(rnames);;
			this->Tabl1->Rows[n - 1]->Cells[2]->Value = Convert_char_to_String(numbers);
			this->Tabl1->Rows[n - 1]->Cells[3]->Value = Convert_char_to_String(yearss);
			this->Tabl1->Rows[n - 1]->Cells[4]->Value = sizer;
			this->Tabl1->Rows[n - 1]->Cells[5]->Value = kolre;
			this->Tabl1->Rows[n - 1]->Cells[6]->Value = kolrk;
			this->Tabl1->Rows[n - 1]->Cells[7]->Value = kolrp;
			n++;
		}
		this->Table->Location = System::Drawing::Point(20, 32);
		fclose(jojos);
		this->serp1->Text = L"";
		this->serp2->Text = L"";
		this->serp3->Text = L"";
		this->serp4->Text = L"";
		this->serp5->Text = L"";
		this->serp6->Text = L"";
		this->serp7->Text = L"";
	}
}