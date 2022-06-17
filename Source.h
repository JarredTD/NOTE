#pragma once
#include<iostream>
#include<string>
#include<sstream>

const char COMMAND_START = '-';
const char ADD = 'a';
const std::string FAIL = " ";

const int MESSAGE_SIZE = 51;

struct Note
{
	std::string name;
	std::string message;
};

// Creates a new node structure and returns a ptr to it. 
// Takes in a message and a name. Creates note with said inputs.
Note Create_Note(std::string);

// Takes in a string and finds "=". Will copy anything but whitespace until the "=" is found.
std::string Find_Name(std::string);

// takes in a string and finds "=". Will copy anything except the first whitspace after the "=" until the null terminator ("\0").
std::string Find_Message(std::string);
