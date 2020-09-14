/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:38:34 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/14 13:35:30 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void): _brain(Brain())
{
}

Human::~Human(void)
{
}

std::string		Human::identify(void) const{
	return (this->_brain.identify());
}

Brain			Human::getBrain(void) const{
	return this->_brain;
}
