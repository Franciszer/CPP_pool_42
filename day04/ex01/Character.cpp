/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:35:00 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 15:10:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void):
_name("undefined"),
_ap(0),
_weapon(NULL)
{
    return ;
}

Character::Character(std::string const & name):
_name(name),
_ap(40),
_weapon(NULL)
{
    return ;
}

Character::Character(Character const &src) {
    if (this != &src)
        *this = src;
    return ;
}

Character::~Character(void) {
    return ;
}

Character	&Character::operator=(Character const &src) {
    if (this != &src) {
        this->_name = src.getName();
        this->_ap = src.getAp();
        this->_weapon = &src.getWeapon();
    }
    return *this;
}

void        Character::recoverAP() {
    if ((this->_ap += 10))
        this->_ap = 40;
    return ;
}

void        Character::equip(AWeapon* weapon) {
    this->_weapon = weapon;
    return ;
}
void        Character::attack(Enemy* enemy) {
    if (this->_weapon) {
        int apAfterAttack = this->_ap - this->_weapon->getAPCost();
        if (apAfterAttack >= 0) {
            this->_ap = apAfterAttack;
            std::cout << this->_name + " attacks "+ enemy->getType()\
                + " with a " + this->_weapon->getName() << std::endl;
            this->_weapon->attack();
            enemy->takeDamage(this->_weapon->getDamage());
            if (!enemy->getHP())
                delete enemy;
        }    
    } 
}

std::ostream	&operator<<(std::ostream &os, Character const &character) {
    os << character.getName() + " has " << character.getAp() << " AP";
    if (&character.getWeapon())
        os << " and wields a " + character.getWeapon().getName();
    else
        os << " and is unarmed";
    os << std::endl;
    return os;
}

AWeapon     &Character::getWeapon() const {
    return *this->_weapon;
}

int         Character::getAp() const {
    return this->_ap;
}

std::string Character::getName() const {
    return this->_name;
}
