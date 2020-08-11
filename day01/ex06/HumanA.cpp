/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:24:50 by franciszer        #+#    #+#             */
/*   Updated: 2020/08/08 12:18:42 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) 
{
	std::cout << "HumanA Creator Called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA Destructor Called" << std::endl;
}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}
