/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:18:52 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 18:50:25 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <chrono>

class ClapTrap {
    public:
        ClapTrap(std::string name = "default");
        ClapTrap(ClapTrap const &src);
        ~ClapTrap(void);
        ClapTrap   &operator=(ClapTrap const &src);

        std::string getName(void);
        int         getHp(void);
        void        setHp(int amount);

        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
    protected:
        std::string name;
        int         hit_points;
        int         max_hit_points;
        int         energy_points;
        int         max_energy_points;
        int         level;
        int         melee_attack_damage;
        int         ranged_attack_damage;
        int         armor_damage_reduction;
};

#endif
