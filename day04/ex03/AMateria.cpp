/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:59:04 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 22:34:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type):
_xp(0),
_type(type)
{
    return ;
}

AMateria::AMateria(AMateria const &src) {
    if (this != &src)
        *this = src;
    return ;
}

AMateria::~AMateria(void) {
    return ;
}

AMateria	&AMateria::operator=(AMateria const &src) {
    if (this != &src) {
        this->_xp = src.getXP();
        this->_type = src.getType();
    }
    return *this;
}

std::string const   &AMateria::getType() const {
    return this->_type;
}

unsigned int        AMateria::getXP() const {
    return this->_xp;
}

void                AMateria::use(ICharacter& target) {
    (void)target;
    this->_xp += 10;
    return ;
}

