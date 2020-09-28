/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:59:10 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 21:51:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "AMateria.hpp"

class Ice: public AMateria {
    public:
        Ice(void);
        Ice(Ice const &src);
        virtual ~Ice(void);

        Ice    &operator=(Ice const &src);
        void    use(ICharacter& target);
        AMateria* clone() const;
    private:
        
};

#endif
