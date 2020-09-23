/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:13:06 by user42            #+#    #+#             */
/*   Updated: 2020/09/23 18:42:56 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Claptrap Default constructor called" << std::endl;    
	this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
    std::cout << "Assignation constructor called" << std::endl;
    if (this != &src)
        *this = src;
    return ;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap Destructor called" << std::endl;
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
