/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:24:50 by franciszer        #+#    #+#             */
/*   Updated: 2020/09/14 13:43:15 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) 
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}
