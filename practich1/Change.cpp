#define _CRT_SECURE_NO_WARNINGS
#include "Change.h"
#include <Windows.h>
#include <iostream>
#include "Head.h"
#include <conio.h>
#include <stdio.h>
#include <string.h>
FILE* filep;
FILE* jojo;
char namik[30];
System::Void practich1::MyForm1::MyForm1_Load(System::Object^ sender, System::EventArgs^ e)
{
	int sizer, kolre, kolrk, kolrp,n;
	char names[17], number[6], years[7];
	filep = fopen("TEXTNAME.txt", "r");
	fscanf(filep, "%16s", namik);
	fclose(filep);
	filep = fopen(namik, "r");
	while (Table2->Rows->Count != 0) {
		Table2->Rows->Remove(Table2->Rows[Table2->Rows->Count - 1]);
	}
	n = 1;
	while (fscanf(filep, "%16s%5s%6s%5d%4d%5d%6d", names, number, years, &sizer, &kolre, &kolrk, &kolrp) != EOF)
	{
		this->Table2->Rows->Add();
		this->Table2->Rows[n - 1]->Cells[0]->Value = n;
		this->Table2->Rows[n - 1]->Cells[1]->Value = Convert_char_to_String(names);;
		this->Table2->Rows[n - 1]->Cells[2]->Value = Convert_char_to_String(number);
		this->Table2->Rows[n - 1]->Cells[3]->Value = Convert_char_to_String(years);
		this->Table2->Rows[n - 1]->Cells[4]->Value = sizer;
		this->Table2->Rows[n - 1]->Cells[5]->Value = kolre;
		this->Table2->Rows[n - 1]->Cells[6]->Value = kolrk;
		this->Table2->Rows[n - 1]->Cells[7]->Value = kolrp;
		n++;
	}
	fclose(filep);
}
System::Void practich1::MyForm1::вернутьсяВГлавноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Owner->Show();
	this->Close();
}
//Добавление данных
System::Void practich1::MyForm1::Plus_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Back->Visible = true;
	this->ClientSize = System::Drawing::Size(933, 501);
	this->groupBox2->Visible = false;
	this->Box1->Location = System::Drawing::Point(218, 281);
	this->Box1->Visible = true;
	filep = fopen("TEXTNAME.txt", "r");
	fscanf(filep, "%16s", namik);
	fclose(filep);
}
//Очистка базы данных
System::Void practich1::MyForm1::clear_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult what = MessageBox::Show("Вы уверены?", "Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (what == System::Windows::Forms::DialogResult::Yes) {
		while (Table2->Rows->Count != 0) {
			Table2->Rows->Remove(Table2->Rows[Table2->Rows->Count - 1]);
		}
		filep = fopen("TEXTNAME.txt", "r");
		fscanf(filep, "%16s", namik);
		fclose(filep);
		filep = fopen(namik, "w");
		fclose(filep);
		MessageBox::Show("База очищена", "Информирование", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Table2->Location = System::Drawing::Point(218, 46);
	}
	else{
		return;
	}
}
System::Void practich1::MyForm1::minidel_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	this->Back->Visible = true;
	this->groupBox2->Visible = false;
	this->Box2->Location = System::Drawing::Point(358, 286);
	this->Box2->Visible = true;
}
//Возврат к меню изменений
System::Void practich1::MyForm1::Back_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Back->Visible = false;
	this->groupBox2->Visible = true;
	this->Box1->Visible = false;
	this->Box2->Visible = false;
	this->Box2->Visible = false;
	this->Changer->Visible = false;
}
System::Void practich1::MyForm1::Name1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if(this->Name1->Text == L"Название улицы")
		this->Name1->Text = L"";
}
System::Void practich1::MyForm1::Box1_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if(this->Name1->Text == L"")
		this->Name1->Text = L"Название улицы";
}
System::Void practich1::MyForm1::Name2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name2->Text == L"Номер дома")
		this->Name2->Text = L"";
}
System::Void practich1::MyForm1::Name2_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name2->Text == L"")
		this->Name2->Text = L"Номер дома";
}
System::Void practich1::MyForm1::Name3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name3->Text == L"Год")
		this->Name3->Text = L"";
}
System::Void practich1::MyForm1::Name3_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name3->Text == L"")
		this->Name3->Text = L"Год";
}

System::Void practich1::MyForm1::Name4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name4->Text == L"Размер")
		this->Name4->Text = L"";
}
System::Void practich1::MyForm1::Name4_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name4->Text == L"")
		this->Name4->Text = L"Размер";
}

System::Void practich1::MyForm1::Name5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name5->Text == L"Этажи")
		this->Name5->Text = L"";
}
System::Void practich1::MyForm1::Name5_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name5->Text == L"")
		this->Name5->Text = L"Этажи";
}
System::Void practich1::MyForm1::Name6_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name6->Text == L"Комнаты")
		this->Name6->Text = L"";
}
System::Void practich1::MyForm1::Name6_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name6->Text == L"")
		this->Name6->Text = L"Комнаты";
}
System::Void practich1::MyForm1::Name7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name7->Text == L"Люди")
		this->Name7->Text = L"";
}
System::Void practich1::MyForm1::Name7_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Name7->Text == L"")
		this->Name7->Text = L"Люди";
}//Добавление
System::Void practich1::MyForm1::Accept_Click(System::Object^ sender, System::EventArgs^ e)
{
	int size, kole, kolp, kolk;
	char* name, * numb, * year;
	if ((Convert::ToInt64(Name4->Text) <= 0) || (Convert::ToInt64(Name5->Text) <= 0) || (Convert::ToInt64(Name6->Text) <= 0) || (Convert::ToInt64(Name7->Text) <= 0))
	{
		MessageBox::Show("Значения количества не могут быть <=0", "Информирование", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		this->Name4->Text = L"Размер";
		this->Name5->Text = L"Этажи";
		this->Name6->Text = L"Комнаты";
		this->Name7->Text = L"Люди";
	}
	if(this->Name1->Text != L"Название улицы")
	name = Convert_String_to_char(Name1->Text);
	if (this->Name2->Text != L"Номер дома")
	numb = Convert_String_to_char(Name2->Text);
	if (this->Name3->Text != L"Год")
	year = Convert_String_to_char(Name3->Text);
	size = Convert::ToInt64(Name4->Text);
	kole = Convert::ToInt64(Name5->Text);
	kolk = Convert::ToInt64(Name6->Text);
	kolp = Convert::ToInt64(Name7->Text);
	
	int n = 1;
	filep = fopen("TEXTNAME.txt", "r");
	fscanf(filep, "%-16.16s\n", namik);
	fclose(filep);
	filep = fopen(namik, "a");
	fprintf(filep, "%-16.16s%-5.5s%-6.6s%-5d%-4d%-5d%-7d\n", name, numb, year, size, kole, kolk, kolp);
	fprintf(filep, "\n");
	fclose(filep);
	int sizer, kolre, kolrk, kolrp;
	char names[17], number[6], years[7];
	filep = fopen(namik, "r");
	while (Table2->Rows->Count != 0) {
		Table2->Rows->Remove(Table2->Rows[Table2->Rows->Count - 1]);
	}
	while (fscanf(filep, "%16s%5s%6s%5d%4d%5d%6d",names, number, years, &sizer, &kolre, &kolrk, &kolrp) != EOF)
	{
		this->Table2->Rows->Add();
		this->Table2->Rows[n - 1]->Cells[0]->Value = n;
		this->Table2->Rows[n - 1]->Cells[1]->Value = Convert_char_to_String(names);;
		this->Table2->Rows[n - 1]->Cells[2]->Value = Convert_char_to_String(number);
		this->Table2->Rows[n - 1]->Cells[3]->Value = Convert_char_to_String(years);
		this->Table2->Rows[n - 1]->Cells[4]->Value = sizer;
		this->Table2->Rows[n - 1]->Cells[5]->Value = kolre;
		this->Table2->Rows[n - 1]->Cells[6]->Value = kolrk;
		this->Table2->Rows[n - 1]->Cells[7]->Value = kolrp;
		n++;
	}
	fclose(filep);
	this->Name1->Text = L"Название улицы";
	this->Name2->Text = L"Номер дома";
	this->Name3->Text = L"Год";
	this->Name4->Text = L"Размер";
	this->Name5->Text = L"Этажи";
	this->Name6->Text = L"Комнаты";
	this->Name7->Text = L"Люди";
}//Удаление строчки
System::Void practich1::MyForm1::butdel_Click(System::Object^ sender, System::EventArgs^ e)
{
	char copy[100];
	int del,schet;
	if((this->delek->Text == L"")||(Convert::ToInt64(delek->Text)<1))
		MessageBox::Show("Введите номер строчки(>0)", "Информирование", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else {
		del = Convert::ToInt64(delek->Text);
		filep = fopen(namik, "r");
		jojo = fopen("HELPER.txt", "w");
		schet = 0;
		while (fgets(copy, 90, filep))
		{
			schet++;

			if (schet == del)
			{
				continue;
			}
			fputs(copy, jojo);
		}
		fclose(filep);
		fclose(jojo);
		char copystr[100];
		int sizer, kolre, kolrk, kolrp, n;
		char names[17], number[6], years[7];
		n = 1;
		filep = fopen(namik, "w");
		jojo = fopen("HELPER.txt", "r");
		while (fgets(copystr, 90, jojo))
		{
			fputs(copystr, filep);
		}
		fclose(filep);
		fclose(jojo);
		filep = fopen(namik, "r");
		while (Table2->Rows->Count != 0) {
			Table2->Rows->Remove(Table2->Rows[Table2->Rows->Count - 1]);
		}
		while (fscanf(filep, "%16s%5s%6s%5d%4d%5d%6d", names, number, years, &sizer, &kolre, &kolrk, &kolrp) != EOF)
		{
			this->Table2->Rows->Add();
			this->Table2->Rows[n - 1]->Cells[0]->Value = n;
			this->Table2->Rows[n - 1]->Cells[1]->Value = Convert_char_to_String(names);;
			this->Table2->Rows[n - 1]->Cells[2]->Value = Convert_char_to_String(number);
			this->Table2->Rows[n - 1]->Cells[3]->Value = Convert_char_to_String(years);
			this->Table2->Rows[n - 1]->Cells[4]->Value = sizer;
			this->Table2->Rows[n - 1]->Cells[5]->Value = kolre;
			this->Table2->Rows[n - 1]->Cells[6]->Value = kolrk;
			this->Table2->Rows[n - 1]->Cells[7]->Value = kolrp;
			n++;
		}
		fclose(filep);
		this->Table2->Location = System::Drawing::Point(218, 46);
	}
}//Пропадающие надписи
System::Void practich1::MyForm1::textBox1_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox1->Text == L"")
		this->CHBox1->Text = L"Название улицы";
}

System::Void practich1::MyForm1::textBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox1->Text == L"Название улицы")
		this->CHBox1->Text = L"";
}
System::Void practich1::MyForm1::textBox2_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox2->Text == L"")
		this->CHBox2->Text = L"Номер дома";
}
System::Void practich1::MyForm1::textBox2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox2->Text == L"Номер дома")
		this->CHBox2->Text = L"";
}
System::Void practich1::MyForm1::textBox3_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox3->Text == L"")
		this->CHBox3->Text = L"Год";
}
System::Void practich1::MyForm1::textBox3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox3->Text == L"Год")
		this->CHBox3->Text = L"";
}
System::Void practich1::MyForm1::textBox4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox4->Text == L"Размер")
		this->CHBox4->Text = L"";
}
System::Void practich1::MyForm1::textBox4_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox4->Text == L"")
		this->CHBox4->Text = L"Размер";
}
System::Void practich1::MyForm1::textBox5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox5->Text == L"Этажи")
		this->CHBox5->Text = L"";
}
System::Void practich1::MyForm1::textBox5_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox5->Text == L"")
		this->CHBox5->Text = L"Этажи";
}
System::Void practich1::MyForm1::textBox6_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox6->Text == L"Комнаты")
		this->CHBox6->Text = L"";
}
System::Void practich1::MyForm1::textBox6_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox6->Text == L"")
		this->CHBox6->Text = L"Комнаты";
}
System::Void practich1::MyForm1::textBox7_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox7->Text == L"")
		this->CHBox7->Text = L"Люди";
}
System::Void practich1::MyForm1::textBox7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox7->Text == L"Люди")
		this->CHBox7->Text = L"";
}
System::Void practich1::MyForm1::textBox8_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox8->Text == L"Номер строчки")
		this->CHBox8->Text = L"";
}
System::Void practich1::MyForm1::textBox8_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->CHBox8->Text == L"")
		this->CHBox8->Text = L"Номер строчки";
}
System::Void practich1::MyForm1::changedel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Changer->Location = System::Drawing::Point(243, 276);
	this->groupBox2->Visible = false;
	this->Back->Visible = true;
	this->Changer->Visible = true;
}//Изменение данных
System::Void practich1::MyForm1::changerbut_Click(System::Object^ sender, System::EventArgs^ e)
{
	while (Table2->Rows->Count != 0) {
		Table2->Rows->Remove(Table2->Rows[Table2->Rows->Count - 1]);
	}
	filep = fopen(namik, "r");
	jojo = fopen("HELPER.txt", "w");
	int sizer_check, kolre_check, kolrk_check, kolrp_check,schet;
	char rnames_check[17], numbers_check[6], yearss_check[7];
	char* name_checker, * numb_checker, * year_checker;
	int size_checker, kole_checker, kolp_checker, kolk_checker,n;
	schet = 1;
	if ((Convert::ToInt64(CHBox4->Text) <= 0) || (Convert::ToInt64(CHBox5->Text) <= 0) || (Convert::ToInt64(CHBox6->Text) <= 0) || (Convert::ToInt64(CHBox7->Text) <= 0))
	{
		MessageBox::Show("Значения количества не могут быть <=0", "Информирование", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		this->CHBox4->Text = L"Размер";
		this->CHBox5->Text = L"Этажи";
		this->CHBox6->Text = L"Комнаты";
		this->CHBox7->Text = L"Люди";
	}
	if (Convert::ToInt64(CHBox8->Text) < 1)
	{
		MessageBox::Show("Значениe строки больше 0", "Информирование", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		this->CHBox8->Text = L"Номер строки";
	}
	if ((this->CHBox8->Text != L"")&&(this->CHBox8->Text != L"Номер строки"))
	{
		n = Convert::ToInt64(CHBox8->Text);
	}
	while (fscanf(filep, "%16s%5s%6s%5d%4d%5d%6d", rnames_check, numbers_check, yearss_check, &sizer_check, &kolre_check, &kolrk_check, &kolrp_check) != EOF)
	{
		if(schet!=n)
		fprintf(jojo, "%-16.16s%-5.5s%-6.6s%-5d%-4d%-5d%-7d\n", rnames_check, numbers_check, yearss_check, sizer_check, kolre_check, kolrk_check, kolrp_check);
		else {
			if ((this->CHBox1->Text != L"")&&(this->CHBox1->Text != L"Название улицы"))
			{
				name_checker = Convert_String_to_char(CHBox1->Text);
			}
			else
				name_checker = rnames_check;
			if ((this->CHBox2->Text != L"")&&(this->CHBox2->Text != L"Номер дома"))
			{
				numb_checker = Convert_String_to_char(CHBox2->Text);
			}
			else
				numb_checker = numbers_check;
			if ((this->CHBox3->Text != L"")&&(this->CHBox3->Text != L"Год"))
			{
				year_checker = Convert_String_to_char(CHBox3->Text);
			}
			else
				year_checker = yearss_check;
			if (this->CHBox4->Text != L"")
			{
				size_checker = Convert::ToInt64(CHBox4->Text);
			}
			else
				size_checker = sizer_check;
			if (this->CHBox5->Text != L"")
			{
				kole_checker = Convert::ToInt64(CHBox5->Text);
			}
			else
				kole_checker = kolre_check;
			if (this->CHBox6->Text != L"")
			{
				kolp_checker = Convert::ToInt64(CHBox6->Text);
			}
			else
				kolp_checker = kolrk_check;
			if (this->CHBox7->Text != L"")
			{
				kolk_checker = Convert::ToInt64(CHBox7->Text);
			}
			else
				kolk_checker = kolrp_check;
			fprintf(jojo, "%-16.16s%-5.5s%-6.6s%-5d%-4d%-5d%-7d\n", name_checker, numb_checker, year_checker, size_checker, kole_checker, kolp_checker, kolk_checker);
		}
		schet++;
	}
	fclose(jojo);
	fclose(filep);
	filep = fopen(namik, "w");
	jojo = fopen("HELPER.txt", "r");
	while (fscanf(jojo, "%16s%5s%6s%5d%4d%5d%6d", rnames_check, numbers_check, yearss_check, &sizer_check, &kolre_check, &kolrk_check, &kolrp_check) != EOF)
	{
		fprintf(filep, "%-16.16s%-5.5s%-6.6s%-5d%-4d%-5d%-7d\n", rnames_check, numbers_check, yearss_check, sizer_check, kolre_check, kolrk_check, kolrp_check);

	};
	fclose(jojo);
	fclose(filep);
	filep = fopen(namik, "r");
	n = 1;
	while (fscanf(filep, "%16s%5s%6s%5d%4d%5d%6d", rnames_check, numbers_check, yearss_check, &sizer_check, &kolre_check, &kolrk_check, &kolrp_check) != EOF)
	{
		this->Table2->Rows->Add();
		this->Table2->Rows[n - 1]->Cells[0]->Value = n;
		this->Table2->Rows[n - 1]->Cells[1]->Value = Convert_char_to_String(rnames_check);;
		this->Table2->Rows[n - 1]->Cells[2]->Value = Convert_char_to_String(numbers_check);
		this->Table2->Rows[n - 1]->Cells[3]->Value = Convert_char_to_String(yearss_check);
		this->Table2->Rows[n - 1]->Cells[4]->Value = sizer_check;
		this->Table2->Rows[n - 1]->Cells[5]->Value = kolre_check;
		this->Table2->Rows[n - 1]->Cells[6]->Value = kolrk_check;
		this->Table2->Rows[n - 1]->Cells[7]->Value = kolrp_check;
		n++;
	}
	fclose(filep);
	this->CHBox1->Text = L"Название улицы";
	this->CHBox2->Text = L"Номер дома";
	this->CHBox3->Text = L"Год";
	this->CHBox4->Text = L"Размер";
	this->CHBox5->Text = L"Этажи";
	this->CHBox6->Text = L"Комнаты";
	this->CHBox7->Text = L"Люди";
	this->CHBox8->Text = L"Номер строчки";
}