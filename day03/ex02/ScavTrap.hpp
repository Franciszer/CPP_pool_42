/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:18:52 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 18:49:08 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <chrono>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        ScavTrap   &operator=(ScavTrap const &src);

		void        rangedAttack(std::string const &target);
        void        meleeAttack(std::string const &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        challengeNewcomer(std::string const & target);
    private:
        static std::string challenges[];
        std::string name;
};

#endif
