/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 12:29:36 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/27 14:21:50 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP

# define PEON_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Victim.hpp"

class Peon: public Victim {
	public:
		Peon(std::string name = "peon_default_name");
		Peon(Peon const &src);
		virtual ~Peon(void);

		virtual void	getPolymorphed() const;
		Peon			&operator=(Peon const &src);
	private:
		
};

#endif
