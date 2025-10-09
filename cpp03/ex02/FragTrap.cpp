#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	_name = "Default";
	_Hit_point = 100;
	_Energy_point = 100;
	_Attack_damage = 30;
	std::cout << "Default FragTrap constructor called!" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << this->_name << " FragTrap constructor called!" << std::endl;
	_name = name;
	_Hit_point = 100;
	_Energy_point = 100;
	_Attack_damage = 30;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " FragTrap destructor called!" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << this->_name << " FragTrap constructor copy called!" << std::endl;
	*this = other;
	return;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << this->_name << " FragTrap constructor d'affectation. called!" << std::endl;
    if (this != &other)
	{
        this->_name = other._name;
        this->_Hit_point = other._Hit_point;
        this->_Energy_point = other._Energy_point;
        this->_Attack_damage = other._Attack_damage;
    }
    return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_Energy_point <= 0)
	{
		std::cout << "FragTrap " << this->_name << " can't attacks " << target << "(reason : too low Energie point)" << std::endl;
		return;
	}
	if (this->_Hit_point <= 0)
	{
		std::cout << "FragTrap " << this->_name << " can't attacks " << target << "(reason : too low Hit point)" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << std::endl;
	this->_Energy_point -= 1;
	return;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " This member function displays a positive high-fives request on the standard output" << std::endl;
}