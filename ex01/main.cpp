
# include "ScavTrap.hpp"

int	main()
{
	ScavTrap st1;
	ScavTrap st2("Scavvy");
	ScavTrap st3(st2);

	st1.attack("someone");
	st2.attack("another person");

	st1.guardGate();
}