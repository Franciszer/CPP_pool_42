/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:39:00 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/13 18:42:00 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{
}

Zombie::~Zombie(void)
{
}

void	Zombie::advert() {
	std::cout << this->name << "(" << this->type << "):" << " BRAAAINNNNSSSS...." << std::endl;
}
