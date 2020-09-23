/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 18:02:40 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/23 19:00:59 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name):
ClapTrap(name),
FragTrap(name),
NinjaTrap(name)
{
	this->hit_points = FragTrap::hit_points;
	std::cout << this->FragTrap::hit_points << std::endl;
	return ;
}

SuperTrap::~SuperTrap(void) {
	return ;
}

