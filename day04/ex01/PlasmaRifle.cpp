/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:20:00 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 14:56:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
AWeapon("Plasma Rifle", 5, 21)
{
    return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src):
AWeapon(src)
{
    return ;
}

PlasmaRifle::~PlasmaRifle(void) {
    return ;
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &src) {
    if (this != &src) {
        this->_name = src.getName();
        this->_apCost = src.getAPCost();
        this->_damage = src.getDamage();
    }
    return *this;
}

void    PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
