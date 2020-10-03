/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 14:55:59 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 15:27:36 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		virtual ~Bureaucrat(void);

		Bureaucrat   	&operator=(Bureaucrat const &src);
		int				getGrade() const;
		std::string		getName() const;
		void			incrementGrade();
		void			decrementGrade();

		class GradeTooHighException: public std::exception {
			virtual const char	*what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char	*what() const throw();
		};
		
	private:
		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const bureaucrat);

#endif
