#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong arguments number" << std::endl;
		return (1);
	}
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl harl;

	harl.complain_all(argv[1]);

	return (0);
}