
# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor\n";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap paremeterized constructor\n";
	// _name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

void ScavTrap::attack(std::string target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << "is in Gate Keeper mode\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor\n";
}