/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:34:56 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 14:56:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP

# define POWERFIST_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "AWeapon.hpp"

class PowerFist: public AWeapon {
    public:
        PowerFist();
        PowerFist(PowerFist const &src);
        virtual ~PowerFist(void);

        void        attack() const;
        PowerFist   &operator=(PowerFist const &src);
        
};

#endif
