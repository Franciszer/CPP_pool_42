/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:38:34 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/08 11:20:24 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	// std::cout << "Human Creator Called" << std::endl;
	this->_brain = Brain();
}

Human::~Human(void)
{
	// std::cout << "Human Destructor Called" << std::endl;
}

std::string	Human::identify(void) {
	std::string str = this->_brain.identify();
	return (str);
}

Brain		Human::getBrain(void) {
	return this->_brain;
}
