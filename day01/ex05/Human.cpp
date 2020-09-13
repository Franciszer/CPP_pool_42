/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:38:34 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/13 18:50:41 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	this->_brain = Brain();
}

Human::~Human(void)
{
}

std::string	Human::identify(void) {
	std::string str = this->_brain.identify();
	return (str);
}

Brain		Human::getBrain(void) {
	return this->_brain;
}
