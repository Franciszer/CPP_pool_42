/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:18:52 by user42            #+#    #+#             */
/*   Updated: 2020/09/24 13:46:27 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <chrono>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
    public:
        FragTrap(std::string name = "default");
        ~FragTrap(void);


        void        rangedAttack(std::string const &target);
        void        meleeAttack(std::string const &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        vaulthunter_dot_exe(std::string const & target);
    private:
        static std::string attacks[];
};

#endif
