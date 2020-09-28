/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:55:52 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 18:19:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP

# define ASSAULT_TERMINATOR_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
    public:
        AssaultTerminator(void);
        AssaultTerminator(AssaultTerminator const &src);
        virtual ~AssaultTerminator(void);

        AssaultTerminator   &operator=(AssaultTerminator const &src);
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
    private:
        
};

#endif
