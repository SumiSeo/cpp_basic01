#include <fstream>
#include <iostream>
#include <sstream>
#include <stdlib.h>

void	replaceAndWrite(std::stringstream &buffer, const std::string &src,
		const std::string &dest, std::ostream &outfile)
{
	size_t	i;
	size_t	srcLength;

	i = 0;
	std::string content = buffer.str();
	srcLength = src.length();
	while (i < content.length())
	{
		// Check if the substring matches `src`
		if (content.substr(i, srcLength) == src)
		{
			outfile << dest; // Write `dest` to `outfile`
			i += srcLength;  // Skip over `src` in the input
		}
		else
		{
			outfile << content[i]; // Write the current character to `outfile`
			i++;                   // Move to the next character
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Argument number is wrong" << std::endl;
		return (1);
	}
	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cout << "The file does not exist" << std::endl;
		return (1);
	}
	std::string src;
	src = argv[2];
	std::string dest;
	dest = argv[3];
	std::string new_file = (std::string(argv[1]) + ".replace").c_str();
	std::ofstream outfile(new_file.c_str());
	std::stringstream buffer;
	buffer << infile.rdbuf();
	replaceAndWrite(buffer, src, dest, outfile);
}