/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:26:51 by franciszer        #+#    #+#             */
/*   Updated: 2020/09/14 13:43:49 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::~Weapon(void)
{
}

void		Weapon::setType(std::string type) {
	this->_type = type;
}

std::string	&Weapon::getType(void) {
	std::string	&type = this->_type;

	return type;
}
