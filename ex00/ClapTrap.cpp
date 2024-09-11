
# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints (10), _energyPoints (10), _attackDamage (0)
{
	std::cout << "ClapTrap default constructor\n";
}

ClapTrap::ClapTrap(std::string name) : _hitPoints (10), _energyPoints (10), _attackDamage (0)
{
	std::cout << "ClapTrap paremeterized constructor\n";
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor\n";
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator\n";
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "Not enough points\n";
		return ;
	}
	_hitPoints--;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << "attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_attackDamage -= amount;
	if (_attackDamage < 0)
		_attackDamage = 0;
	std::cout << "ClapTrap " << _name << "is damaged\n";
}

void	ClapTrap::beRepaired (unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << "Not enough energy points\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << "is repaired\n";
	_hitPoints += amount;
	_energyPoints--;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor\n";
}