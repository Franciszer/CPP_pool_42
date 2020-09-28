/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:17:59 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 14:56:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP

# define PLASMARIFLE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
    public:
        PlasmaRifle();
        PlasmaRifle(PlasmaRifle const &src);
        
        void    attack() const;
        virtual ~PlasmaRifle(void);

        PlasmaRifle   &operator=(PlasmaRifle const &src);

};

#endif
