
# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor\n";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap paremeterized constructor\n";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap()
{
	std::cout << "FragTrap copy constructor\n";

	*this = other;
}
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator\n";
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

void FragTrap::attack(std::string target)
{
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " is giving you a high-five\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor\n";
}