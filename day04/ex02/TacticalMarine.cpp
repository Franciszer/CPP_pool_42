/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:01:05 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 18:24:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
    std::cout << "Tactical Marine ready for action!" << std::endl;
    return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) {
    if (this != &src)
        *this = src;
    return ;
}

TacticalMarine::~TacticalMarine(void) {
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &src) {
    if (this != &src)
        *this = src;
    return *this;
}

ISpaceMarine* TacticalMarine::clone() const {
    TacticalMarine  *copy = new TacticalMarine(*this);
    return copy;
}

void            TacticalMarine::battleCry() const {
    std::cout <<  "For the Holy PLOT !" << std::endl;
    return ;
}

void            TacticalMarine::rangedAttack() const {
    std::cout <<  "* attacks with a bolter *" << std::endl;
    return ;
}

void            TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
    return ;
}
