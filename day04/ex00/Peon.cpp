/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 12:32:39 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/27 14:30:53 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name):
Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon const &src):
Victim(src.getName())
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return ;
}

void			Peon::getPolymorphed() const {
	std::cout << this->_name + " was just polymorphed into a pink Pony!" << std::endl;
}

Peon	&Peon::operator=(Peon const &src) {
	if (this != &src)
		this->_name = src.getName();
	return *this;
}
