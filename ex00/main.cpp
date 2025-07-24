#include "ClapTrap.hpp"

int main() {
    ClapTrap bob("Bob");
    ClapTrap alice("Alice");

    std::cout << std::endl;

    bob.attack("Alice");
    alice.takeDamage(0);

    std::cout << std::endl;

    alice.attack("Bob");
    bob.takeDamage(0);

    std::cout << std::endl;

    bob.beRepaired(5);
    alice.beRepaired(3);

    std::cout << std::endl;

    for (int i = 0; i < 12; ++i) {
        bob.attack("Alice");
    }

    std::cout << std::endl;

    bob.beRepaired(10);

    std::cout << std::endl;

    for (int i = 0; i < 10; ++i) {
        bob.takeDamage(1);
    }

    std::cout << std::endl;

    bob.attack("Alice");
    bob.beRepaired(2);

    std::cout << std::endl;

    for (int i = 0; i < 5; ++i) {
        bob.takeDamage(3);
    }

    std::cout << std::endl;

    return 0;
}
