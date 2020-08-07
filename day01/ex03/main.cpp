/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 15:05:17 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 15:29:57 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void)
{
	ZombieHorde	horde = ZombieHorde(7);
	
	horde.announce();
	return 0;
}
