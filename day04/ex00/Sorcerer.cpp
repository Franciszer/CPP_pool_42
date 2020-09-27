/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 12:33:06 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/27 14:13:07 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title):
_name(name),
_title(title)
{
	std::cout << this->_name + ", " << this->_title + ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
	if (this != &src)
		*this = src;
	std::cout << this->_name + ", " << this->_title + ", is born!" << std::endl;
	return ;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name + ", " << this->_title + ", is dead." + " Consequences will never be the same!" << std::endl;
	return ;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_title = src.getTitle();
	}
	return *this;
}

std::string	Sorcerer::getName(void) const {
	return this->_name;
}
std::string	Sorcerer::getTitle(void) const {
	return this->_title;
}

std::ostream	&operator<<(std::ostream &os, Sorcerer const &sorcerer) {
	os << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle() + ", and i like ponies!" << std::endl;
	return os;
}

void			Sorcerer::polymorph(Victim const &victim) {
	victim.getPolymorphed();
	return ;
}
