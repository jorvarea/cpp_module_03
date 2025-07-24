#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap(" << _name << ") has been created" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    std::cout << "FragTrap(" << _name << ") has been created" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap(" << _name << ") has been created by copy" << std::endl;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap(" << _name << ") has been destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_hitPoints <= 0)
    {
        std::cout << "FragTrap(" << _name << ") is already dead!" << std::endl;
        return;
    } 
    if (_energyPoints <= 0)
    {
        std::cout << "FragTrap(" << this->_name << ") is too exhausted to attack." << std::endl;
        return;
    }
    std::cout << "FragTrap(" << _name << ") attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void FragTrap::highFivesGuys()
{
    if (_hitPoints <= 0)
    {
        std::cout << "FragTrap(" << this->_name << ") cannot high five because it's dead." << std::endl;
        return ;
    }
    std::cout << "FragTrap(" << this->_name << ") is requesting a high five!" << std::endl;
}
