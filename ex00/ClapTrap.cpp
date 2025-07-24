#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap(" << _name << ") has been created" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap(" << _name << ") has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap) : _name(clapTrap._name), _hitPoints(clapTrap._hitPoints), _energyPoints(clapTrap._energyPoints), _attackDamage(clapTrap._attackDamage) {
    std::cout << "ClapTrap(" << _name << ") has been created by copy" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap(" << _name << ") has been destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap(" << _name << ") is already dead!" << std::endl;
        return;
    } 
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap(" << this->_name << ") is too exhausted to attack." << std::endl;
        return;
    }
    std::cout << "ClapTrap(" << _name << ") attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap(" << _name << ") is already dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap(" << _name << ") takes " << std::min(amount, _hitPoints) << " points of damage!" << std::endl;
    _hitPoints = std::max(0, (int)_hitPoints - (int)amount);
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap(" << _name << ") is already dead!" << std::endl;
        return;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap(" << this->_name << ") is too exhausted to be repaired." << std::endl;
        return;
    } 
    std::cout << "ClapTrap(" << _name << ") is repaired for " << amount << " points!" << std::endl;
    _energyPoints--;
    _hitPoints += amount;
}
