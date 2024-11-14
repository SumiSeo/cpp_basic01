#include "Harl.hpp"

Harl::Harl(void){};

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

void Harl::complain(std::string level)
{
	void (*funcPtr)(void);
	(void)funcPtr;
	(void)level;
	error();
	
};

Harl::~Harl(void){};
