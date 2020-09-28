/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 21:16:14 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 22:29:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ICharacter.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class Character: public ICharacter {
    public:
        Character(std::string const &name);
        Character(void);
        Character(Character const &src);
        virtual ~Character();
        std::string const &getName(void) const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        Character   &operator=(Character const &src);

    private:
        std::string _name;
        AMateria    *_inventory[4];
};

#endif
