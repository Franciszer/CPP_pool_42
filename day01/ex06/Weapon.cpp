/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:26:51 by franciszer        #+#    #+#             */
/*   Updated: 2020/08/08 11:48:25 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "Weapon Creator Called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon Destructor Called" << std::endl;
}

void		Weapon::setType(std::string type) {
	this->_type = type;
}

std::string	&Weapon::getType(void) {
	std::string	&type = this->_type;

	return type;
}
