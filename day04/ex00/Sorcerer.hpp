/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 12:30:39 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/29 10:47:55 by user42           ###   ########.fr       */
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
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &src);
		Sorcerer();
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
