#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap(" << _name << ") has been created" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    std::cout << "ScavTrap(" << _name << ") has been created" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap(" << _name << ") has been created by copy" << std::endl;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap(" << _name << ") has been destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap(" << _name << ") is already dead!" << std::endl;
        return;
    } 
    if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap(" << _name << ") is too exhausted to attack." << std::endl;
        return;
    }
    std::cout << "ScavTrap(" << _name << ") attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate()
{
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap(" << _name << ") cannot enter Gate keeper mode because it's dead." << std::endl;
        return ;
    }
    std::cout << "ScavTrap(" << _name << ") is now in Gate keeper mode." << std::endl;
}
