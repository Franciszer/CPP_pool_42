/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 14:55:59 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/05 13:51:58 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Form.hpp"

class	Form;

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
		void			signForm(Form &form) const;

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
