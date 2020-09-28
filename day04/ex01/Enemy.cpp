/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:44:49 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 13:56:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {
    return ;
}

Enemy::Enemy(int hp, std::string const & type):
_hp(hp),
_type(type)
{
    return ;
}

Enemy::Enemy(Enemy const &src) {
    if (this != &src)
        *this = src;
    return ;
}

Enemy::~Enemy(void) {
    return ;
}

Enemy	&Enemy::operator=(Enemy const &src) {
    if (this != &src) {
        this->_hp = src.getHP();
        this->_type = src.getType();
    }
    return *this;
}

std::string         Enemy::getType() const {
    return this->_type;
}

int 				Enemy::getHP() const {
    return this->_hp;
}

void        		Enemy::takeDamage(int damage) {
    if (damage > 0) {
        int hpAfterAttack = this->_hp - damage;
        if (hpAfterAttack < 0)
            this->_hp = 0;
        else
            this->_hp = hpAfterAttack;
    }
    return ;
}
