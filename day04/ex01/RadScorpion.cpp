/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:59:57 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 14:14:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion():
Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(RadScorpion const &src):
Enemy(src)
{
    return ;
}

RadScorpion::~RadScorpion(void) {
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &src) {
    if (this != &src) {
        this->_hp = src.getHP();
        this->_type = src.getType();
    }
    return *this;
}
