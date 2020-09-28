/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 21:00:26 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 21:51:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void):
AMateria("cure")
{
    return ;
}

Cure::Cure(Cure const &src):
AMateria(src)
{
    return ;
}

Cure::~Cure(void) {
    return ;
}

Cure	&Cure::operator=(Cure const &src) {
    if (this != &src) {
        this->_xp = src.getXP();
        this->_type = src.getType();
    }
    return *this;
}

void    Cure::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
    return ;
}
AMateria*   Cure::clone() const {
    Cure    *copy = new Cure(*this);
    return  copy;
}
