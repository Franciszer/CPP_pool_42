/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:38:07 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/14 13:33:27 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

class Brain
{
public:
	Brain(void);
	~Brain(void);

	std::string	identify(void) const;

private:
	std::string 		_address;
};

#endif
