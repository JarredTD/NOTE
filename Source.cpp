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

				std::cout << "\n" << note.name << ": \n\t";
				std::getline(std::cin, input);

				note.message = input;

				std::cout << note.name << ": \n\t" << note.message << std::endl;
				break;

			default:
				break;
		}
	}

	return 0;
}
