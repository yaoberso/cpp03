#include "ScavTrap.cpp"

ClapTrap::ScavTrap(std::string name): _name(name), _Hit_point(100), _Energy_point(50), _Attack_damage(20)
{
	std::cout << this->_name << " constructor called!" << std::endl;
	return;
}

ClapTrap::~ScavTrap()
{
	std::cout << this->_name << " destructor called!" << std::endl;
	return;
}

ClapTrap::ScavTrap(ClapTrap &other)
{
	std::cout << this->_name << " constructor copy called!" << std::endl;
	*this = other;
	return;
}

ScavTrap &ScavTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
	{
        this->_name = other._name;
        this->_Hit_point = other._Hit_point;
        this->_Energy_point = other._Energy_point;
        this->_Attack_damage = other._Attack_damage;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_Energy_point <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attacks " << target << "(reason : too low Energie point)" << std::endl;
		return;
	}
	if (this->_Hit_point <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attacks " << target << "(reason : too low Hit point)" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << std::endl;
	this->_Energy_point -= 1;
	return;
}