/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 12:30:39 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/27 14:07:02 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP

# define SORCERER_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Victim.hpp"

class	Victim;

class Sorcerer {
	public:
		Sorcerer(std::string name =  "sorcerer_default_name", std::string title = "sorcerer_default_title");
		Sorcerer(Sorcerer const &src);
		virtual ~Sorcerer(void);

		Sorcerer   &operator=(Sorcerer const &src);
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void		polymorph(Victim const &victim);

	private:
		std::string	_name;
		std::string	_title;
};

std::ostream	&operator<<(std::ostream &os, Sorcerer const &sorcerer);

#endif
