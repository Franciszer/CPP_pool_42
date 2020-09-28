/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:59:57 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 14:11:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant():
Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return ;
}

SuperMutant::SuperMutant(SuperMutant const &src):
Enemy(src)
{
    return ;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaargh..." << std::endl;
    return ;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &src) {
    if (this != &src) {
        this->_hp = src.getHP();
        this->_type = src.getType();
    }
    return *this;
}

void    SuperMutant::takeDamage(int damage) {
    Enemy::takeDamage(damage - 3);
}

