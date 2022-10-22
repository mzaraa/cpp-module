#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

	/*
	** ptr_level -> a typedef function pointer on a Harl's function member. Which 
	** return nothin, don't take any params. The function called output the string needed.
	** In this ex06 i added switch case : it's usefull to displays the specified level and those above it
	*/
void Harl::complain(std::string level)
{
	int i;
	ptr_level arr_func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
		if (level == levels[i])
			break ;
	if (i >= 4)
		std::cerr << "Can't complain, <" << level << "> is an invalid mode !";
	else
	{
		switch (i)
		{
			case 0:
			(this->*arr_func[i++])();
			case 1:
			(this->*arr_func[i++])();
			case 2:
			(this->*arr_func[i++])();
			case 3:
			(this->*arr_func[i++])();
			break;
			default:
					break;
		}
	}
}
