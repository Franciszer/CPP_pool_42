/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 20:06:58 by user42            #+#    #+#             */
/*   Updated: 2020/09/23 16:31:20 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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

    for (int j = 0 ; j < 5 ; j++)
        Jim.vaulthunter_dot_exe("vivianneLaGitane");
    
	ScavTrap	ogScav("littleTrap");
	ScavTrap	copyScav(ogScav);
	ScavTrap	littleTrap = copyScav;

	while (littleTrap.getHp())
		littleTrap.takeDamage(12);
	while (littleTrap.getHp() != 50)
		littleTrap.beRepaired(12);
	for (int j = 0; j < 5; j++)
		littleTrap.challengeNewcomer("Robert");	

	NinjaTrap	ninja("joffrey");
	NinjaTrap	nninja(ninja);
	NinjaTrap	uninja = nninja;
	ClapTrap	clap;
	
	std::cout << std::endl << std::endl;
	uninja.ninjaShoebox(nninja);
	uninja.ninjaShoebox(clap);
	for (int  j = 0; j < 5; j++) {
		uninja.ninjaShoebox(Jim);
		uninja.ninjaShoebox(ogScav);
		std::cout << std::endl;
	}
	return 0;
}
