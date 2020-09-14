/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:37:46 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/14 13:34:53 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::stringstream	stream;

	stream << std::uppercase << std::hex << (long)this;
	
	this->_address = "0x" + stream.str();
}

Brain::~Brain(void)
{
}

std::string		Brain::identify(void) const{
	
	return (this->_address);
}

