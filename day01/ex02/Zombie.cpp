/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:39:00 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/09 15:24:47 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{
}

Zombie::~Zombie(void)
{
}

void	Zombie::announce() {
	std::cout << this->name << "(" << this->type << "):" << " BRAAAINNNNSSSS...." << std::endl;
}

