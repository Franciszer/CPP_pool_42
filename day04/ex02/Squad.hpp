/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:39:15 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 16:43:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP

# define SQUAD_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ISquad.hpp"

class Squad: public ISquad {
    public:
        Squad(void);
        Squad(Squad const &src);
        virtual ~Squad(void);

        Squad           &operator=(Squad const &src);
        int             getCount() const;
        ISpaceMarine    *getUnit(int) const;
        int             push(ISpaceMarine *);

    private:
        ISpaceMarine    **_members;
        int             _count;
};

#endif
