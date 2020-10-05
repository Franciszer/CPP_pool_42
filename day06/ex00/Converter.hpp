/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:24:55 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/05 18:36:01 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP

# define CONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Converter {
	public:
		Converter(void);
		Converter(Converter const &src);
		virtual ~Converter(void);

		Converter   &operator=(Converter const &src);
		static void		convert(const char *src);
	private:
		static void		_toChar(const char *src);
		static void		_toInt(const char *src);
		static void		_toFloat(const char *src);
		static void		_toDouble(const char *src);
};

#endif
