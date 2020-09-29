/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:38:30 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/29 11:15:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
_name(name),
_apCost(apcost),
_damage(damage)
{
	return ;
}

AWeapon::AWeapon(AWeapon const &src) {
	if (this != &src)
		*this = src;
	return ;
}

AWeapon::~AWeapon(void) {
	return ;
}

AWeapon	&AWeapon::operator=(AWeapon const &src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_apCost = src.getAPCost();
		this->_damage = src.getDamage();
	}
	return *this;
}

std::string		AWeapon::getName() const {
	return this->_name;
}

int 			AWeapon::getAPCost() const {
	return this->_apCost;
}

int 			AWeapon::getDamage() const {
	return this->_damage;
}

