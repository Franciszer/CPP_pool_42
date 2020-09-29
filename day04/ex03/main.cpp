/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:57:02 by user42            #+#    #+#             */
/*   Updated: 2020/09/29 12:18:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
    IMateriaSource* src = new MateriaSource();
    Ice     *ice = new Ice();
    Cure    *cure = new Cure();
    src->learnMateria(ice);
    src->learnMateria(cure);
    ICharacter* moi = new Character("moi");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    AMateria* tmp1;
    tmp1 = src->createMateria("cure");
    moi->equip(tmp1);
    ICharacter* bob = new Character("bob");
    moi->use(0, *bob);
    moi->use(1, *bob);


    std::cout << std::endl << "MY TESTS" << std::endl << std::endl;

    std::cout << "BENOIT" << std::endl;
    Character   *benoitLeChamoix = new Character("benoitLeChamoix");
    benoitLeChamoix->equip(tmp);
    benoitLeChamoix->equip(tmp1);
    benoitLeChamoix->equip(tmp);
    benoitLeChamoix->equip(tmp1);
    benoitLeChamoix->use(2, *bob);
    benoitLeChamoix->use(3, *bob);
    benoitLeChamoix->equip(tmp);
    benoitLeChamoix->equip(tmp1);
    benoitLeChamoix->equip(tmp);
    benoitLeChamoix->equip(tmp1);
    
    std::cout << std::endl << "GRIFFON" << std::endl;
    Character      *griffonLeBouffon = new Character(*benoitLeChamoix);
    griffonLeBouffon->use(0, *bob);
    griffonLeBouffon->use(1, *bob);
    std::cout << std::endl << "AUGUSTE" << std::endl;
    Character       *augusteQuelBuste = new Character("augusteQuelBuste");
    *augusteQuelBuste = *griffonLeBouffon;
    griffonLeBouffon->use(2, *bob);
    griffonLeBouffon->use(3, *bob);
    delete(tmp1);
    delete(tmp);
    delete ice;
    delete cure;
    delete bob;
    delete moi;
    delete src;
    delete benoitLeChamoix;
    delete griffonLeBouffon;
    delete augusteQuelBuste;
    return 0;
}