#include<iostream>
#include<files/Source.h>

const char COMMAND_START = '-';
const char ADD = 'a';


struct Note
{
	int count;
	char* message;
};



int main(int argc, char** argv)
{
	char* first_arg = argv[1];
	if (first_arg[0] == '-')
	{
		switch (first_arg[1])
		{
			case ADD:
				printf("Creating a note.");

				break;

			default:
				break;
		}
	}

	return 0;
}