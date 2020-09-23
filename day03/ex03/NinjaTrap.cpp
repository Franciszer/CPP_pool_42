/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:34:45 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/23 16:32:51 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name) {
	std::cout << "NinjaTrap default constructor called" << std::endl;
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
	return ;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "NinjaTrap destructor called" << std::endl;
	return ;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &clapTrap) {
	std::cout << this->getName() << "used ninjaShoebox on ";
	std::cout << "a regular ClapTrap called " << clapTrap.getName() << std::endl;
	return ;
}

void		NinjaTrap::ninjaShoebox(FragTrap &fragTrap) {
	std::cout << this->getName() << "used ninjaShoebox on ";
	std::cout << "a FrapTrap called " << fragTrap.getName() << std::endl;
	std::cout << "He used vaulhunter_dot_exe" << std::endl;
	fragTrap.vaulthunter_dot_exe("random victim");
	return ;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &scavTrap) {
	std::cout << this->getName() << "used ninjaShoebox on ";
	std::cout << "a ScavTrap called " << scavTrap.getName() << std::endl;
	std::cout << "He used challengeNewcomer" << std::endl;
	scavTrap.challengeNewcomer("random victim");
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap) {
	std::cout << this->getName() << "used ninjaShoebox on ";
	std::cout << "a NinjaTrap called " << ninjaTrap.getName() << std::endl;
	std::cout << "KAGE BUGIN NO JUTSU" << std::endl;
	return ;
}
