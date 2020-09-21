/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:18:52 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 18:49:39 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <chrono>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap(void);

        FragTrap   &operator=(FragTrap const &src);

        void        rangedAttack(std::string const &target);
        void        meleeAttack(std::string const &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        vaulthunter_dot_exe(std::string const & target);
    private:
        static std::string attacks[];
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
