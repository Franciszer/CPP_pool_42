/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 21:00:26 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 21:51:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void):
AMateria("ice")
{
    return ;
}

Ice::Ice(Ice const &src):
AMateria(src)
{
    return ;
}

Ice::~Ice(void) {
    return ;
}

Ice	&Ice::operator=(Ice const &src) {
    if (this != &src) {
        this->_xp = src.getXP();
        this->_type = src.getType();
    }
    return *this;
}

void    Ice::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
    return ;
}

AMateria*   Ice::clone() const {
    Ice    *copy = new Ice(*this);
    return  copy;
}
