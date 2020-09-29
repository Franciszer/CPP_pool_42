/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:09:08 by user42            #+#    #+#             */
/*   Updated: 2020/09/29 11:48:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include "ICharacter.hpp"

class   ICharacter;

class AMateria
{
    private:
        AMateria();
    protected:   
        unsigned int    _xp;
        std::string     _type;
    public:
        AMateria(std::string const & type);
        AMateria(AMateria const &src);
        AMateria    &operator=(AMateria const &src);
        virtual ~AMateria();
        std::string const &getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
