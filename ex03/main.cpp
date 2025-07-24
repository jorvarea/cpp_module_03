#include "DiamondTrap.hpp"

int main() {
    std::cout << "\n--- DiamondTrap creation ---\n";
    DiamondTrap dt("DI4M0ND");

    std::cout << "\n--- Attacking ---\n";
    dt.attack("target");

    std::cout << "\n--- Taking damage ---\n";
    dt.takeDamage(20);

    std::cout << "\n--- Repairing ---\n";
    dt.beRepaired(10);

    std::cout << "\n--- Who am I? ---\n";
    dt.whoAmI();

    std::cout << "\n--- Copy & Assignment ---\n";
    DiamondTrap dtCopy(dt);
    DiamondTrap dtAssigned;
    dtAssigned = dt;

    std::cout << "\n--- All destructors will be called now ---\n";
    return 0;
}
