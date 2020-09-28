/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:59:10 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 21:49:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "AMateria.hpp"

class Cure: public AMateria {
    public:
        Cure(void);
        Cure(Cure const &src);
        virtual ~Cure(void);

        Cure    &operator=(Cure const &src);
        void    use(ICharacter& target);
        AMateria* clone() const;
    private:
        
};

#endif
