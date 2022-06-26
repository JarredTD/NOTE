#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

const std::string DIR_PATH = "note_database\\";
const std::string FILE_TYPE = ".txt";
const char COMMAND_START = '-';
const char ADD = 'a';


struct Note
{
	std::string name;
	std::string message;
};
