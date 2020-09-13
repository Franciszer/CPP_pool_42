/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:48:47 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/13 18:45:18 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(unsigned int n)
{
	if (n > 0) {
		this->_zombieHorde = new Zombie[n];
		this->_size= n;
	
		for (unsigned int i = 0; i < n; i++)
			this->_zombieHorde[i].name = ZombieHorde::_randomName();
	}
	else
		std::cout << "Your horde needs atleast 1 zombie" << std::endl;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombieHorde;
}

void	ZombieHorde::announce() {
	for (unsigned int i = 0; i < this->_size; i++)
		this->_zombieHorde[i].advert();
}

std::string	ZombieHorde::_zombieNames[] = {
										"Albert",
										"Gilderoy",
										"Gelabert-Jones",
										"Giley Jones",
										"Jonathan",
										"Luffy"
};

std::string	ZombieHorde::_randomName(void) {
	std::srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
	int	maxIndex = sizeof(ZombieHorde::_zombieNames)/sizeof((ZombieHorde::_zombieNames[0]));
	std::string	name = ZombieHorde::_zombieNames[std::rand() % maxIndex];
	return name;
}
