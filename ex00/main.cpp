
# include "ClapTrap.hpp"

int	main()
{
	ClapTrap	instance1;
	ClapTrap	instance2 ("clappy");

	instance1.attack("someone");
	instance2.attack("another person");
}