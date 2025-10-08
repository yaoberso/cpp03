#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <iomanip>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string _name;
		int _Hit_point = 10;
		int _Energy_point = 10;
		int _Attack_damage = 0;
};

#endif