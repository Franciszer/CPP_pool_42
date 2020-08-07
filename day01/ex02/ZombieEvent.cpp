/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:40:34 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 14:30:06 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	std::cout << "ZombieEvent Creator Called" << std::endl;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "ZombieEvent Destructor Called" << std::endl;
}


void	ZombieEvent::setZombieType(std::string type) {
	this->_zombieType = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie	*newZombie = new Zombie(name, this->_zombieType);

	return (newZombie);
}

std::string	ZombieEvent::_zombieNames[] = {
										"Albert",
										"Gilderoy",
										"Gelabert-Jones",
										"Giley Jones",
										"Jonathan",
										"Luffy"	
};

Zombie	*ZombieEvent::randomChump(void) {
	std::srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
	int	maxIndex = sizeof(ZombieEvent::_zombieNames)/sizeof((ZombieEvent::_zombieNames[0]));
	std::string	name = ZombieEvent::_zombieNames[std::rand() % maxIndex];
	return (this->newZombie(name));
}
