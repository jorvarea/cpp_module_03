#include "FragTrap.hpp"

int main() {
    std::cout << "\n--- FragTrap tests ---\n";
    FragTrap ft("FR4G-TP");
    ft.attack("target");
    ft.takeDamage(40);
    ft.beRepaired(20);
    ft.highFivesGuys();

    std::cout << "\n--- Copy/assign FragTrap ---\n";
    FragTrap copy(ft);
    FragTrap assigned;
    assigned = ft;

    return 0;
}
