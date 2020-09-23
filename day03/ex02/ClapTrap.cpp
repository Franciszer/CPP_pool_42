/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:13:06 by user42            #+#    #+#             */
/*   Updated: 2020/09/23 12:28:24 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
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

ClapTrap::ClapTrap(ClapTrap const &src) {
    std::cout << "Assignation constructor called" << std::endl;
    if (this != &src)
        *this = src;
    return ;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src) {
    if (this != &src) {
        this->name = src.name;
        this->armor_damage_reduction = src.armor_damage_reduction;
        this->hit_points = src.hit_points;
        this->max_hit_points = src.max_energy_points;
        this->energy_points = src.energy_points;
        this->max_energy_points = src.max_energy_points;
        this->level = src.level;
        this->melee_attack_damage = src.melee_attack_damage;
        this->ranged_attack_damage = src.melee_attack_damage;
    }
    return *this;

}

std::string ClapTrap::getName(void) {
    return this->name;
}
int         ClapTrap::getHp(void) {
    return this->hit_points;
}

void        ClapTrap::setHp(int amount) {
    if (amount > this->max_hit_points)
        this->hit_points = this->max_hit_points;
    else if (amount < 0)
        this->hit_points = 0;
    else
        this->hit_points = amount;
    return ;
}

void        ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->name << " took " << amount <<\
    " points of damage" << std::endl;
    this->setHp(this->hit_points - amount);
    return ;
}
void        ClapTrap::beRepaired(unsigned int amount) {
    std::cout << this->name << " was repaired by " << amount\
    << "hit points" << std::endl;
    this->setHp(this->hit_points + amount);
}
