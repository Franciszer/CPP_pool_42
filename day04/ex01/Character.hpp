/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:29:45 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 14:59:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    private:
        Character();
        std::string _name;
        int         _ap;
        AWeapon     *_weapon;
    public:
        Character(std::string const & name);
        Character(Character const &src);
        Character   &operator=(Character const &src);
        virtual ~Character();
        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);
        AWeapon     &getWeapon() const;
        int         getAp() const;
        std::string getName() const;
};

std::ostream	&operator<<(std::ostream &os, Character const &character);

#endif