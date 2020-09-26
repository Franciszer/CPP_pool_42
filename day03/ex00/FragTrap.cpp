/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:13:06 by user42            #+#    #+#             */
/*   Updated: 2020/09/26 11:38:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):
name(name),
hit_points(100),
max_hit_points(100),
energy_points(100),
max_energy_points(100),
level(1),
melee_attack_damage(30),
ranged_attack_damage(20),
armor_damage_reduction(5)
{
    std::cout << "Default constructor called" << std::endl;    
    return ;
}

FragTrap::FragTrap(FragTrap const &src) {
    std::cout << "Assignation constructor called" << std::endl;
    if (this != &src)
        *this = src;
    return ;
}

FragTrap::~FragTrap(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &src) {
    if (this != &src) {
        this->name = src.name;
        this->armor_damage_reduction = src.armor_damage_reduction;
        this->hit_points = src.hit_points;
        this->max_hit_points = src.max_energy_points;
        this->energy_points = src.energy_points;
        this->max_energy_points = src.max_energy_points;
        this->level = src.level;
        this->melee_attack_damage = src.melee_attack_damage;
        this->ranged_attack_damage = src.ranged_attack_damage;
    }
    return *this;

}

std::string FragTrap::getName(void) {
    return this->name;
}
int         FragTrap::getHp(void) {
    return this->hit_points;
}

void        FragTrap::setHp(int amount) {
    if (amount > this->max_hit_points)
        this->hit_points = this->max_hit_points;
    else if (amount < 0)
        this->hit_points = 0;
    else
        this->hit_points = amount;
    return ;
}

void        FragTrap::rangedAttack(std::string const &target) {
    std::cout << this->name << " attacks " << target <<\
    " at range for " << this->ranged_attack_damage << " damage" << std::endl;
    return ;    
}

void        FragTrap::meleeAttack(std::string const &target) {
    std::cout << this->name << " attacks " << target <<\
    " in melee for " << this->melee_attack_damage << " damage" << std::endl;
    return ;
}

void        FragTrap::takeDamage(unsigned int amount) {
	int	reduced_value = amount - this->armor_damage_reduction;
    std::cout << this->name << " took " << reduced_value <<\
    " points of damage" << std::endl;
    this->setHp(this->hit_points - reduced_value);
    return ;
}
void        FragTrap::beRepaired(unsigned int amount) {
    std::cout << this->name << " was repaired by " << amount\
    << "hit points" << std::endl;
    this->setHp(this->hit_points + amount);
}

std::string FragTrap::attacks[] = {
    "knife",
    "stick",
    "machine gun",
    "drop kick",
    "kiss"
};

void        FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if ((this->energy_points -= 25) < 0) {
        this->energy_points = 0;
        std::cout << this->name << " is out of energy" << std::endl;
    }
    else {
        std::srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
        int	maxIndex = sizeof(FragTrap::attacks)/sizeof((FragTrap::attacks[0]));
        std::string	attackName = FragTrap::attacks[std::rand() % maxIndex];
        std::cout << this->name << " used " << attackName <<\
        " on " << target << std::endl;
    }
    return ;
}
