/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:38:30 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/27 16:41:57 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {
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
