#include "Harl.hpp"

int	main(void)
{
	std::string debug = "DEBUG";
	std::string info = "INFO";
	std::string warning = "WARNING";
	std::string error = "ERROR";
	Harl harl;
	harl.complain(debug);
	harl.complain(info);
	harl.complain(warning);
	harl.complain(error);

	return (0);
}