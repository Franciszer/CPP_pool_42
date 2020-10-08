/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 13:08:36 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/08 16:11:33 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

# define SPAN_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <algorithm>
# include <vector>

typedef std::vector<unsigned int> vector;

class Span {
	public:
		Span(unsigned int n);
		Span(Span const &src);
		virtual ~Span(void);

		Span   &operator=(Span const &src);

		void			addNumber(unsigned int n, unsigned int repeat = 1);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		class	notEnoughSpaceException: public std::exception {
			virtual const char	*what() const throw();
		};

				class	noSpanToFindException: public std::exception {
			virtual const char	*what() const throw();
		};

	private:
		Span(void);

		unsigned int				_current;
		unsigned int				_size;
		vector						_container;
		
};

#endif
