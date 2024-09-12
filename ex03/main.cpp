
# include "FragTrap.hpp"

int	main()
{
	FragTrap ft1;
	FragTrap ft2("Scavvy");
	FragTrap ft3(ft2);

	ft1.attack("someone");
	ft2.attack("another person");
	ft3.highFivesGuys();
	ft1.highFivesGuys();
}