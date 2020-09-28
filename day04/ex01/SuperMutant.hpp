/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:57:50 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 14:09:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP

# define SUPERMUTANT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy {
    public:
        SuperMutant();
        SuperMutant(SuperMutant const &src);
        virtual ~SuperMutant(void);

        SuperMutant   &operator=(SuperMutant const &src);
        void          takeDamage(int);
        
};

#endif
