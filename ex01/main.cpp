
# include "ScavTrap.hpp"

int	main()
{
	ScavTrap st1;
	std::cout << std::endl;

	ScavTrap st2("Scavvy");
	std::cout << std::endl;

	ScavTrap st3(st2);
	std::cout << std::endl;

	ScavTrap st4 = st3;
	std::cout << std::endl;

	st1.attack("someone");
	st2.attack("another person");

	st1.guardGate();
}