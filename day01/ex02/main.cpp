/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:41:56 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/09 15:38:25 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent event;

	event.setZombieType("crawler");
	
	std::cout << "____RANDOM_ZOMBIES____" << std::endl;
	Zombie	*eric = event.randomChump();
	eric->announce();
	delete eric;
	eric = event.randomChump();
	eric->announce();
	delete eric;
	eric = event.randomChump();
	eric->announce();
	delete eric;
	eric = event.randomChump();
	eric->announce();
	delete eric;
	std::cout << std::endl;
	
	std::cout << "____DEFINED_ZOMBIES____" << std::endl;
	Zombie	zidane("Zinedine", "standing");
	zidane.announce();
	std::cout << std::endl;
	return (0);
}
