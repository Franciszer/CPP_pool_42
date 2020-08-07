/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:38:34 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 17:00:44 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Human Creator Called" << std::endl;
	//this->_brain = Brain();
}

Human::~Human(void)
{
	std::cout << "Human Destructor Called" << std::endl;
}

std::string	Human::identifier(void) {
	std::string str = this->_brain.identifier();
	return (str);
}
