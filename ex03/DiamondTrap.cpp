#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
 : ClapTrap("default_clap_name")
 , FragTrap("default_clap_name")
 , ScavTrap("default_clap_name")
 , _name("default")
{ 
    std::cout << "DiamondTrap(" << _name << ") has been created" << std::endl;
    _hitPoints   = FragTrap::_hitPoints;
    _energyPoints= ScavTrap::_energyPoints;
    _attackDamage= FragTrap::_attackDamage;
}


DiamondTrap::DiamondTrap(const std::string& name)
 : ClapTrap(name + "_clap_name")
 , FragTrap(name + "_clap_name")
 , ScavTrap(name + "_clap_name")
 , _name(name)
{
    std::cout << "DiamondTrap(" << _name << ") has been created" << std::endl;
    _hitPoints   = FragTrap::_hitPoints;
    _energyPoints= ScavTrap::_energyPoints;
    _attackDamage= FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
    std::cout << "DiamondTrap(" << _name << ") has been created by copy" << std::endl;
    _hitPoints    = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        _name = other._name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap(" << _name << ") has been destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap(" << _name << "): My ClapTrap name is " << ClapTrap::_name << std::endl;
}
