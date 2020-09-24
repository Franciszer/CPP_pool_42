/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 18:02:40 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/24 15:32:27 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name):
FragTrap(name),
NinjaTrap(name)
{
	std::cout << "Super constructor" << std::endl;
	this->hit_points = FragTrap::hit_points;
	this->max_energy_points = FragTrap::hit_points;
	this->energy_points = NinjaTrap::energy_points;
	this->max_energy_points = NinjaTrap::max_energy_points;
	this->melee_attack_damage = NinjaTrap::melee_attack_damage;
	this->ranged_attack_damage = FragTrap::ranged_attack_damage;
	this->armor_damage_reduction = FragTrap::armor_damage_reduction;
	return ;
}

SuperTrap::~SuperTrap(void) {
	return ;
}
void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
