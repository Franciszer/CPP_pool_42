/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:24:49 by user42            #+#    #+#             */
/*   Updated: 2020/09/29 11:38:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void)
{
    ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	
	delete vlc;
	std::cout << std::endl << "MY TESTS" << std::endl << std::endl;
	
	ISpaceMarine* jeremLeBassem = new TacticalMarine;
	ISpaceMarine* jimLaVictime = new AssaultTerminator;
	ISpaceMarine* didierLePoissonier = new AssaultTerminator;
	
	Squad	*ekip = new Squad;
	ekip->push(jeremLeBassem);	
	ekip->push(jimLaVictime);
	ekip->push(didierLePoissonier);	
	Squad	*copy_assignation = new Squad(*ekip);
	Squad	*copy_operator = new Squad();
	
	*copy_operator = *ekip;

	delete copy_operator;
	delete copy_assignation;
	delete ekip;
    return 0;
}
