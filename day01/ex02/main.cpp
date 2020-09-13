/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:41:56 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/13 18:38:46 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent event;

	
	std::cout << "____RANDOM_ZOMBIES____" << std::endl << std::endl;
	
	Zombie	*random = event.randomChump();
	random->announce();
	delete random;
	event.setZombieType("swimmer");
	random = event.randomChump();
	random->announce();
	delete random;
	event.setZombieType("jumper");
	random = event.randomChump();
	random->announce();
	delete random;
	event.setZombieType("lover");
	random = event.randomChump();
	random->announce();
	delete random;
	std::cout << std::endl;
	
	std::cout << "____DEFINED_ZOMBIES____" << std::endl << std::endl;
	Zombie	cristiano("CR7", "asDuBallonRond");
	cristiano.announce();
	return (0);
}
