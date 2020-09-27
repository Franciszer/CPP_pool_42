/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 12:28:59 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/27 14:31:19 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	// std::cout << robert << jim << joe;
	// robert.polymorph(jim);
	// robert.polymorph(joe);


	std::cout << "GOGO" << std::endl << std::endl;
	Sorcerer	robertClone(robert);
	Sorcerer	robertsclonesClone = robertClone;

	Victim	jiji(jim);
	Victim	juju = jiji;
	
	Peon	jeje(joe);
	Peon	jonathan = joe;
	std::cout << std::endl << "END" << std::endl << std::endl;
	return 0;
}
