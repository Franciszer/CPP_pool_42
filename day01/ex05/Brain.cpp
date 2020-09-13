/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:37:46 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/13 18:50:53 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
}

Brain::~Brain(void)
{
}

std::string	Brain::identify(void) {
	std::stringstream	stream;

	stream << std::uppercase << std::hex << (long)this;
	return ("0x" + stream.str());
}
