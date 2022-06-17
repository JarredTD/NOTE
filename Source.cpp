#include "Source.h"


int main(int argc, char** argv)
{
	std::string input;
	Note note;

	char* first_arg = argv[1];
	if (first_arg[0] == '-')
	{
		switch (first_arg[1])
		{
			case ADD:
				note.name = argv[2];
				note.message = argv[3];


				/*std::cin.ignore();
				std::getline(std::cin, input);
				note = Create_Note(input);

				if (note.name == FAIL) { return -1; }*/

				std::cout << note.name << ": " << note.message << std::endl;
				break;

			default:
				break;
		}
	}

	return 0;
}


std::string Find_Name(std::string input)
{
	std::string name;

	std::size_t start_point = 0;
	std::size_t end_point = input.find('=');
	
	if (end_point == std::string::npos) { return FAIL; }

	for (end_point; input[end_point] != ' '; end_point--)
	for (start_point; input[start_point] != ' '; start_point++){}

	name = input.substr(start_point, end_point);

	return name;
}

std::string Find_Message(std::string input)
{
	std::string message;

	return "f";
}

Note Create_Note(std::string input)
{
	Note new_note;
	
	new_note.name = Find_Name(input);
	if (new_note.name == FAIL) { return new_note; }

	new_note.message = Find_Message(input);

	return new_note;
}