/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:13:06 by user42            #+#    #+#             */
/*   Updated: 2020/09/25 12:53:56 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
name(name),
hit_points(100),
max_hit_points(100),
energy_points(50),
max_energy_points(50),
level(1),
melee_attack_damage(20),
ranged_attack_damage(15),
armor_damage_reduction(3)
{
    std::cout << "ScavTrap suddenly appeared" << std::endl;    
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
    std::cout << "Assignation of a ScavTrap" << std::endl;
    if (this != &src)
        *this = src;
    return ;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap was destroyed" << std::endl;
    return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src) {
    if (this != &src) {
        this->name = src.name;
        this->armor_damage_reduction = src.armor_damage_reduction;
        this->hit_points = src.hit_points;
        this->max_hit_points = src.max_hit_points;
        this->energy_points = src.energy_points;
        this->max_energy_points = src.max_energy_points;
        this->level = src.level;
        this->melee_attack_damage = src.melee_attack_damage;
        this->ranged_attack_damage = src.ranged_attack_damage;
    }
    return *this;

}

std::string ScavTrap::getName(void) {
    return this->name;
}
int         ScavTrap::getHp(void) {
    return this->hit_points;
}

void        ScavTrap::setHp(int amount) {
    if (amount > this->max_hit_points)
        this->hit_points = this->max_hit_points;
    else if (amount < 0)
        this->hit_points = 0;
    else
        this->hit_points = amount;
    return ;
}

void        ScavTrap::rangedAttack(std::string const &target) {
    std::cout << this->name << " does his ScapTrap thing " << target <<\
    "at range for " << this->ranged_attack_damage << " damage" << std::endl;
    return ;    
}

void        ScavTrap::meleeAttack(std::string const &target) {
    std::cout << this->name << " does his ScapTrap thing " << target <<\
    "in melee for " << this->melee_attack_damage << " damage" << std::endl;
    return ;
}

void        ScavTrap::takeDamage(unsigned int amount) {
	int	reduced_value = amount - this->armor_damage_reduction;
    std::cout << this->name << " suffered " << reduced_value <<\
    " points of damage" << std::endl;
    this->setHp(this->hit_points - reduced_value);
    return ;
}
void        ScavTrap::beRepaired(unsigned int amount) {
    std::cout << this->name << " was healed by " << amount\
    << "hit points" << std::endl;
    this->setHp(this->hit_points + amount);
}

std::string ScavTrap::challenges[] = {
    "chess",
    "touching one's with nose one's tongue",
    "bending a spoon",
    "dance battle",
    "kiss a frog"
};

void        ScavTrap::challengeNewcomer(std::string const & target) {
    std::srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    int	maxIndex = sizeof(ScavTrap::challenges)/sizeof((ScavTrap::challenges[0]));
    std::string	challengeName = ScavTrap::challenges[std::rand() % maxIndex];
    std::cout << this->name << " challenged " << target <<\
    " in the " << challengeName << " challenge" << std::endl;
    return ;
}
