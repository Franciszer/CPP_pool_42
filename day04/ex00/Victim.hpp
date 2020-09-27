/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 12:32:00 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/27 14:09:37 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP

# define VICTIM_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Victim {
	public:
		Victim(std::string name = "victim_default_name");
		Victim(Victim const &src);
		virtual ~Victim(void);

		Victim			&operator=(Victim const &src);
		std::string		getName(void) const;
		virtual void	getPolymorphed() const;
	protected:
		std::string	_name;
};

std::ostream	&operator<<(std::ostream &os, Victim const &victim);

#endif
