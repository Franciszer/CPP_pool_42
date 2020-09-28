/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:36:07 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 14:56:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():
AWeapon("Power Fist", 8, 50)
{
    return ;
}

PowerFist::PowerFist(PowerFist const &src):
AWeapon(src)
{
    return ;
}

PowerFist::~PowerFist(void) {
    return ;
}

PowerFist	&PowerFist::operator=(PowerFist const &src) {
    if (this != &src) {
        this->_name = src.getName();
        this->_apCost = src.getAPCost();
        this->_damage = src.getDamage();
    }
    return *this;
}

void        PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
