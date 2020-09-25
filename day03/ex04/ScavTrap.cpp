/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:13:06 by user42            #+#    #+#             */
/*   Updated: 2020/09/25 12:55:07 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
ClapTrap(name)
{
    std::cout << "ScavTrap suddenly appeared" << std::endl;    
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
    return ;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap was destroyed" << std::endl;
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

std::string ScavTrap::challenges[] = {
    "chess",
    "touching one's nose with one's tongue",
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
