/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:43:49 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 18:44:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void):
_members(NULL),
_count(0)
{
    return ;
}

Squad::Squad(Squad const &src):
_members(NULL),
_count(0)
{
    int max = src.getCount();
    
    for (int i = 0 ; i < max ; i++)
        this->push(src.getUnit(i)->clone());
    return ;
}

Squad::~Squad(void) {
    if (this->_count) {
        for (int i = 0 ; i < this->_count ; i++)
            delete this->_members[i];
        delete [] this->_members;
    }
    return ;
}

Squad	&Squad::operator=(Squad const &src) {
    if (this->_count) {
        for (int i = 0 ; i < this->_count ; i++)
            delete this->getUnit(i);
        delete [] this->_members;
        this->_count = 0;
    }
    int max = src._count;
    for (int i = 0 ; i < max ; i++)
        this->push(src.getUnit(i));
    return *this;
}

int             Squad::getCount() const {
    return this->_count;
}

ISpaceMarine    *Squad::getUnit(int index) const {
    if (index < 0 || index > this->_count - 1)
        return NULL;
    else
        return this->_members[index];
}

int             Squad::push(ISpaceMarine *new_member) {
    if (!new_member)
        return this->_count;
    for (int i = 0 ; i < this->_count ; i++)
        if (new_member == this->_members[i])
            return this->_count;
    ISpaceMarine    **new_squad = new ISpaceMarine*[this->_count + 1];
    for (int i = 0 ; i < this->_count ; i++)
        new_squad[i] = this->_members[i];
    delete [] this->_members;
    new_squad[this->_count++] = new_member;
    this->_members = new_squad;
    return this->_count;
}
