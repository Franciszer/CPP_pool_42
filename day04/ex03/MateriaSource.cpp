/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:13:17 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 22:42:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void):
_count(0){
        for (int i = 0 ; i < 4 ; i++)
        this->_known_materias[i] = NULL;

    return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    if (this != &src) {
        this->_count = src._count;
        for (int i = 0; i < 4 ; i++) {
            this->_known_materias[i] = src._known_materias[i]->clone();
        }
    }
    return ;
}

MateriaSource::~MateriaSource(void) {
    return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src) {
    if (this != &src) {
        this->_count = src._count;
        for (int i = 0; i < 4 ; i++) {
            if (src._known_materias[i])
                this->_known_materias[i] = src._known_materias[i]->clone();
            else
                this->_known_materias[i] = NULL;
        }
    }
    return *this;
}

void            MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4 ; i++) {
        if (this->_known_materias[i] == NULL) {
            this->_known_materias[i] = m;
            break ;
        }
    }
    return ;    
}

AMateria        *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0 ; i < 4 ; i++) {
        if (this->_known_materias[i] && this->_known_materias[i]->getType() == type)
            return this->_known_materias[i]->clone();
    }
    return 0;
}
