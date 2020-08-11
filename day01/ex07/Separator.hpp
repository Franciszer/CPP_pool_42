/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Separator.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:58:05 by franciszer        #+#    #+#             */
/*   Updated: 2020/08/11 21:28:47 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEPARATOR_HPP

# define SEPARATOR_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>
# include <sstream>
class Separator
{
	public:
		Separator(std::string const &file, std::string const &to_find,\
				std::string const &to_replace);
		~Separator(void);
		
		void	replace(void);
	private:
		std::string	const &file;
		std::string	const &to_find;
		std::string	const &to_replace;

		std::string	replace_line(std::string const &line);
};

#endif
