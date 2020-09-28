/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:55:52 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 17:43:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP

# define TACTICAL_MARINE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
    public:
        TacticalMarine(void);
        TacticalMarine(TacticalMarine const &src);
        virtual ~TacticalMarine(void);

        TacticalMarine   &operator=(TacticalMarine const &src);
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
    private:
        
};

#endif
