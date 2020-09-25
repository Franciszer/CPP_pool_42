/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:13:06 by user42            #+#    #+#             */
/*   Updated: 2020/09/25 12:54:54 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "Fragtrap default constructor called" << std::endl;    
	this->name = name;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
    return ;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructor called" << std::endl;
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

std::string FragTrap::attacks[] = {
    "knife",
    "stick",
    "machine gun",
    "drop kick",
    "kiss"
};

void        FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    int	maxIndex = sizeof(FragTrap::attacks)/sizeof((FragTrap::attacks[0]));
    std::string	attackName = FragTrap::attacks[std::rand() % maxIndex];
    std::cout << this->name << " used " << attackName <<\
    " on " << target << std::endl;
    return ;
}
