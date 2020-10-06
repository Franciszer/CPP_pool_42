/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:24:55 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/06 17:23:39 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP

# define CONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include <sstream>

# define IS_DISPLAYABLE(c) ((c > 31 && c <= 127) ? true : false) 

class Converter {
	public:
		Converter(void);
		Converter(char const *str);
		Converter(Converter const &src);
		virtual ~Converter(void);

		Converter   &operator=(Converter const &src);
		void		convert();
	private:
		void		_toChar();
		void		_toInt();
		void		_toFloat();
		void		_toDouble();
		double		_value;
		char		_charValue;
		bool		_checkDouble;
		bool		_checkChar;
};

#endif
