/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 15:44:09 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/29 12:29:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* radScorpion = new RadScorpion();
	AWeapon* plasmaRifle = new PlasmaRifle();
	AWeapon* powerFist = new PowerFist();
	me->equip(plasmaRifle);
	std::cout << *me;
	
	me->equip(powerFist);
	std::cout << radScorpion->getType() + " has " << radScorpion->getHP() << " HP" << std::endl;
	me->attack(radScorpion);
	std::cout << radScorpion->getType() + " has " << radScorpion->getHP() << " HP" << std::endl;
	std::cout << *me;
	me->equip(plasmaRifle);
	std::cout << *me;
	me->attack(radScorpion);
	std::cout << *me;
	me->attack(radScorpion);
	std::cout << *me;

	AWeapon *secondFist = new PowerFist();
	me->equip(secondFist);
	SuperMutant	*superMutant = new SuperMutant();
	std::cout << me->getWeapon().getName() + " does " << me->getWeapon().getDamage() << " damage" << std::endl;
	for (int i = 0 ; i < 4; i++) {
		std::cout << superMutant->getType() + " has " << superMutant->getHP() << " HP" << std::endl;
		me->attack(superMutant);
		me->recoverAP();
	}
	delete secondFist;
	delete me;
	delete plasmaRifle;
	delete powerFist;
	return 0;
}
