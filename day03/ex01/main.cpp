/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 20:06:58 by user42            #+#    #+#             */
/*   Updated: 2020/09/26 11:43:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap   Jim("Jim");
    FragTrap   Jimmy(Jim);
    FragTrap   JimmyJunior = Jimmy;
    
    Jim.meleeAttack("rodrigueLaVicos");
    Jimmy.rangedAttack("guliverLaPoukie");
    
    while (JimmyJunior.getHp())
        JimmyJunior.takeDamage(25);
    while (JimmyJunior.getHp() != 100)
        JimmyJunior.beRepaired(25);

    for (int j = 0 ; j < 5 ; j++) {
        Jim.vaulthunter_dot_exe("vivianneLaGitane");
    }
    
	ScavTrap	ogscav("littleTrap");
	ScavTrap	copyScav = ogscav;
	ScavTrap	littleTrap(ogscav);

	while (littleTrap.getHp())
		littleTrap.takeDamage(12);
	while (littleTrap.getHp() != 100)
		littleTrap.beRepaired(12);
	for (int j = 0; j < 5; j++)
		littleTrap.challengeNewcomer("Robert");	
	return 0;
}
