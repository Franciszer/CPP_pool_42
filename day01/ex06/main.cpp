/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:36:34 by franciszer        #+#    #+#             */
/*   Updated: 2020/09/14 13:44:13 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"

int	main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon crossbow = Weapon("crude spiked crossbow");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(crossbow);
	jim.attack();
	crossbow.setType("some other type of crossbow");
	jim.attack();
}
