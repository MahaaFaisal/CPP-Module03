
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor\n";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap parametrized constructor\n";
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
	std::cout << "DiamondTrap copy constructor\n";
	DiamondTrap::_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &rhs)
{
	std::cout << "DiamondTrap copy assignment operator\n";
	DiamondTrap::_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor\n";
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap: " << _name << " ClapTrap: " << ClapTrap::_name << std::endl;
}