#include "ScavTrap.hpp"

int main() {
    std::cout << "--- ClapTrap test ---" << std::endl;
    ClapTrap ct("CL4P-TP");
    ct.attack("trash can");
    ct.takeDamage(5);
    ct.beRepaired(3);

    std::cout << "\n--- ScavTrap test ---" << std::endl;
    ScavTrap st("SC4V-TP");
    st.attack("intruder");
    st.takeDamage(20);
    st.beRepaired(10);
    st.guardGate();

    std::cout << "\n--- Copy/assign test ---" << std::endl;
    ScavTrap copy(st);
    ScavTrap assigned;
    assigned = st;

    return 0;
}
