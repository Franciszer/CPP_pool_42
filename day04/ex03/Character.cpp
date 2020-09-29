/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 21:18:03 by user42            #+#    #+#             */
/*   Updated: 2020/09/29 12:20:43 by user42           ###   ########.fr       */
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

Character::Character(Character const &src):
Character(src._name)
{
    if (this != &src) {
            for (int i = 0; i < 4 ; i++) {
            if (src._inventory[i])
                this->_inventory[i] = src._inventory[i]->clone();
        }
    }
    return ;
}

Character::~Character(void) {
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
    return ;
}

Character	&Character::operator=(Character const &src) {
    if (this != &src) {
        for (int i = 0 ; i < 4 ; i++) {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
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
    for (int i = 0; i < 4 ; i++) {
        if (!this->_inventory[i]) {
            this->_inventory[i] = m->clone();
            break ;
        }
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
