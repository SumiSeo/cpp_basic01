#include "Harl.hpp"

Harl::Harl(void){};
int	i;
void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !" << std::endl;
};
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did." << std::endl;
};
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
};
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};
void Harl::complain_all(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			std::cout << "[ " << levels[i] << " ]" << std::endl;
			break ;
		}
	}
	switch (i)
	{
	case 0:
		this->debug();
	case 1:
		this->info();
	case 2:
		this->warning();
	case 3:
	{
		this->error();
		break ;
	}
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
Harl::~Harl(void){};
