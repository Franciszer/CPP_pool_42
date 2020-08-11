/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:37:46 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/08 11:15:46 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	// std::cout << "Brain Creator Called" << std::endl;
}

Brain::~Brain(void)
{
	// std::cout << "Brain Destructor Called" << std::endl;
}

std::string	Brain::identify(void) {
	std::stringstream	stream;

	stream << std::uppercase << std::hex << (long)this;
	return ("0x" + stream.str());
}
