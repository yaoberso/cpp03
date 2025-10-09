#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include "ClapTrap.hpp"

class ScavTrap : public: ClapTrap{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ClapTrap &other);
		ScavTrap &operator=(const ClapTrap &other);
		void attack(const std::string& target);

	private:
		std::string _name;
		int _Hit_point;
		int _Energy_point;
		int _Attack_damage;
};

#endif