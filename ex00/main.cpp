
# include "ClapTrap.hpp"

int	main()
{
	ClapTrap	instance1;
	ClapTrap	instance2 ("clappy");
	ClapTrap	instance3(instance2);
	ClapTrap	instance4 = instance2;


	instance1.attack("someone");
	instance2.attack("another person");
	instance3.attack("333333");

}