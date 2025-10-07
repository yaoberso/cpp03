#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <iomanip>

class ClapTrap {
	public:
		ClapTrap();
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		int Hit_point = 10;
		int Energy_point = 10;
		int Attack_damage = 0;
};

#endif