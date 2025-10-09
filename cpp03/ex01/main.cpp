#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "=== Test 1: ClapTrap ===" << std::endl;
    ClapTrap clap("Clappy");
    clap.attack("enemy1");
    clap.takeDamage(3);
    clap.beRepaired(2);
    std::cout << std::endl;

    std::cout << "=== Test 2: ScavTrap ===" << std::endl;
    ScavTrap scav("Scavy");
    scav.attack("enemy2");
    scav.takeDamage(10);
    scav.beRepaired(5);
    std::cout << std::endl;

    std::cout << "=== End of tests: Destruction order ===" << std::endl;
    return 0;
}