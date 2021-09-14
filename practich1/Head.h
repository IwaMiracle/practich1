#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace System;
/* Прототипы функций Convert */
std::string& Convert_String_to_string(String^ s, std::string& os); //Конвертируем System::string^ в std::string
String^ Convert_string_to_String(std::string& os, String^ s); //Конвертируем std::string в System::string^
std::string& Convert_String_to_string(String^ s); //Конвертируем System::string^ в std::string
String^ Convert_string_to_String(std::string& os); //Конвертируем std::string в System::string^
System::String^ Convert_char_to_String(char* ch); //Конвертируем char* в System::string^
char* Convert_String_to_char(System::String^ string); //Конвертируем System::string^ в char*#pragma once
