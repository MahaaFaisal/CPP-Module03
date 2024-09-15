
# include "ClapTrap.hpp"

int	main()
{
	ClapTrap	instance1;
	std::cout << std::endl;

	ClapTrap	instance2 ("clappy");
	std::cout << std::endl;

	ClapTrap	instance3(instance2);
	std::cout << std::endl;

	ClapTrap	instance4;
	instance4 = instance2;
	std::cout << std::endl;

	instance1.attack("someone");
	instance2.attack("another person");
	instance3.attack("333333");

}