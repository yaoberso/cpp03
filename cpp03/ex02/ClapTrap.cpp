#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _Hit_point(10), _Energy_point(10), _Attack_damage(0)
{
	std::cout << this->_name << " ClapTrap constructor called!" << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " ClapTrap destructor called!" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << this->_name << " ClapTrap constructor copy called!" << std::endl;
	*this = other;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << this->_name << " ClapTrap constructor d'affectation called!" << std::endl;
    if (this != &other)
	{
        this->_name = other._name;
        this->_Hit_point = other._Hit_point;
        this->_Energy_point = other._Energy_point;
        this->_Attack_damage = other._Attack_damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_Energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attacks " << target << "(reason : too low Energie point)" << std::endl;
		return;
	}
	if (this->_Hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attacks " << target << "(reason : too low Hit point)" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << std::endl;
	this->_Energy_point -= 1;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " causing " << amount << " points of damage!" << std::endl;
	this->_Hit_point -= amount;
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((unsigned int)this->_Energy_point < amount)
	{
		std::cout << this->_name << " can't repaired" << " (reason : too hight amount)" << std::endl;
		return;
	}
	if (this->_Energy_point <= 0)
	{
		std::cout << this->_name << " can't repaired " << " (reason : too low Energie point)" << std::endl;
		return;
	}
	if (this->_Hit_point <= 0)
	{
		std::cout << this->_name << " can't repaired "  << "(reason : too low Hit point)" << std::endl;
		return;
	}
	std::cout << this->_name << " repaired itself!"<< std::endl;
	this->_Energy_point -= amount;
	return;
}
