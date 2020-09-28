/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 21:18:03 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 22:37:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name):
_name(name)
{
    for (int i = 0 ; i < 4 ; i++)
        this->_inventory[i] = NULL;
        
    return ;
}

Character::Character(void) {    
    return ;
}

Character::Character(Character const &src) {
    if (this != &src) {
        this->_name = src._name;
        for (int i = 0; i < 4 ; i++) {
            this->_inventory[i] = src._inventory[i]->clone();
        }
    }
    return ;
}

Character::~Character(void) {
    return ;
}

Character	&Character::operator=(Character const &src) {
    if (this != &src) {
        this->_name = src._name;
        for (int i = 0; i < 4 ; i++) {
            this->_inventory[i] = src._inventory[i]->clone();
        }
    }
    return *this;
}

std::string const   &Character::getName(void) const {
    return this->_name;
}

void                Character::equip(AMateria *m) {
    for (int i ; i < 4 ; i++)
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            break ;
        }
    return ;    
}

void                Character::unequip(int idx) {
    this->_inventory[idx] = NULL;
    return ;
}

void                Character::use(int idx, ICharacter &target) {
    if (this->_inventory[idx])
        this->_inventory[idx]->use(target);
    return ;
}
