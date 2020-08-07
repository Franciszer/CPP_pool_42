/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:48:47 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 15:26:25 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(unsigned int n)
{
	std::cout << "ZombieHorde Creator Called" << std::endl;
	
	if (n > 0) {
		this->zombieHorde = new Zombie[n];
		this->_size= n;
	
		for (unsigned int i = 0; i < n; i++)
			zombieHorde[i].name = ZombieHorde::randomName();
	}
	else
		std::cout << "Your horde need atleat 1 zombie" << std::endl;
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "ZombieHorde Destructor Called" << std::endl;
	delete [] this->zombieHorde;
}

void	ZombieHorde::announce() {
	for (unsigned int i = 0; i < this->_size; i++)
		this->zombieHorde[i].advert();
}

std::string	ZombieHorde::_zombieNames[] = {
										"Albert",
										"Gilderoy",
										"Gelabert-Jones",
										"Giley Jones",
										"Jonathan",
										"Luffy"
};

std::string	ZombieHorde::randomName(void) {
	std::srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
	int	maxIndex = sizeof(ZombieHorde::_zombieNames)/sizeof((ZombieHorde::_zombieNames[0]));
	std::string	name = ZombieHorde::_zombieNames[std::rand() % maxIndex];
	return name;
}
