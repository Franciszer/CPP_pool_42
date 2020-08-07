/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:39:00 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 15:09:33 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{
	std::cout << "Zombie Creator Called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie Destructor Called" << std::endl;
}

void	Zombie::advert() {
	std::cout << this->name << "(" << this->type << "):" << " BRAAAINNNNSSSS...." << std::endl;
}

