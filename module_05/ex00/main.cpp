#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

int main(void)
{
	// Test grade too high
	std::cout << BOLD(FYEL("Exception : grade too high")) << std::endl;
    try
    {
        Bureaucrat Rox("Rox", -42);
        std::cout << Rox << std::endl;

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl;

	// Test grade perfect
	std::cout << BOLD(FYEL("No exception thrown then decrementation so grade become to low")) << std::endl;
    try
    {
        Bureaucrat Rookie("Rookie", 150); // Object created successfully so destructor was called 
        std::cout << Rookie << std::endl;
        Rookie.decrementation();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl;

	// Test grade too low
	std::cout << BOLD(FYEL("Exception : grade too low")) << std::endl;
    try
    {
        Bureaucrat Tom("Tom", 160);
        Tom.incrementation();
        std::cout << Tom << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
	return 0;
}
