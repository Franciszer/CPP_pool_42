/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 12:33:26 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/27 14:27:42 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name):
_name(name)
{
	std::cout << "A random victim called " + this->_name + " just appeared!" << std::endl;
	return ;
}

Victim::Victim(Victim const &src) {
	if (this != &src)
		*this = src;
	return ;
}

Victim::~Victim(void) {
	std::cout << "The victim " + this->_name + " died for no apparent reasons!" << std::endl;
	return ;
}

Victim	&Victim::operator=(Victim const &src) {
	if (this != &src)
		this->_name = src.getName();
	std::cout << "A random victim called " + this->_name + " just appeared!" << std::endl;
	return *this;
}

std::ostream	&operator<<(std::ostream &os, Victim const &victim){
	os << "I'm " + victim.getName() + " and I like otters!" << std::endl;
	return os;
}

std::string		Victim::getName(void) const {
	return this->_name;
}

void			Victim::getPolymorphed() const {
	std::cout << this->_name + " was just polymorphed in a cute little sheep!" << std::endl;
}