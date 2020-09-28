/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:57:50 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 14:12:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP

# define RADSCORPION_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Enemy.hpp"

class RadScorpion: public Enemy {
    public:
        RadScorpion();
        RadScorpion(RadScorpion const &src);
        virtual ~RadScorpion(void);

        RadScorpion   &operator=(RadScorpion const &src);        
};

#endif
