/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:41:56 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 14:34:50 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent event;

	event.setZombieType("crawler");
	
	Zombie	*eric = event.randomChump();
	eric->advert();
	delete eric;
	Zombie	zidane("Zinedine", "standing");
	return (0);
}
