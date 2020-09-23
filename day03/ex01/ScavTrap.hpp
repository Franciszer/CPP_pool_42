/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:18:52 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 17:27:48 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <chrono>

class ScavTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        ScavTrap   &operator=(ScavTrap const &src);

        std::string getName(void);
        int         getHp(void);
        void        setHp(int amount);

        void        rangedAttack(std::string const &target);
        void        meleeAttack(std::string const &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        challengeNewcomer(std::string const & target);
    private:
        static std::string challenges[];
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
