/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:01:05 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 18:43:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src) {
    if (this != &src)
        *this = src;
    return ;
}

AssaultTerminator::~AssaultTerminator(void) {
    std::cout << "I’ll be back ..." << std::endl;
    return ;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &src) {
    if (this != &src)
        *this = src;
    return *this;
}

ISpaceMarine* AssaultTerminator::clone() const {
    AssaultTerminator  *copy = new AssaultTerminator(*this);
    return copy;
}

void            AssaultTerminator::battleCry() const {
    std::cout <<  "This code is unclean. Purify it !" << std::endl;
    return ;
}

void            AssaultTerminator::rangedAttack() const {
    std::cout <<  "* does nothing *" << std::endl;
    return ;
}

void            AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
    return ;
}
