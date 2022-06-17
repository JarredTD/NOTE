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

				std::cout << note.name << ": " << note.message << std::endl;
				break;

			default:
				break;
		}
	}

	return 0;
}
