#include "Source.h"


int main(int argc, char** argv)
{
	std::ofstream output_file;
	std::ifstream input_file;

	std::string file_path;

	Note note;

	char* first_arg = argv[1];
	if (first_arg[0] == '-')
	{
		switch (first_arg[1])
		{
			case ADD:
				note.name = argv[2];
				note.message = argv[3];

				file_path = DIR_PATH;
				file_path.append(note.name).append(FILE_TYPE);

				output_file.open(file_path);
				if (!output_file) 
				{ 
					std::cout << "note_base opening failed. \n Possible Issues: Database directory missing/in the wrong spot." << std::endl;
					return -1;
				}

				output_file << note.name << '\n';
				output_file << note.message;

				std::cout << note.name << ": \n\t" << note.message << std::endl;
				break;

			default:
				break;
		}
	}

	return 0;
}
