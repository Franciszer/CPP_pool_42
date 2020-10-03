/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:44:01 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 16:19:54 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class Form {
	public:
		Form(void);
		Form(std::string name, int gradeToSign);
		Form(Form const &src);
		virtual ~Form(void);
		
		Form   &operator=(Form const &src);
		void	beSigned(Bureaucrat const bureaucrat);
		std::string	getName() const;
		int			getGradeToSign() const;
		bool		getIsSigned() const;
		class	GradeTooLowException: public std::exception {
			virtual const char	*what() const throw();
		};
		class	GradeTooHighException: public std::exception {
			virtual const char	*what() const throw();
		};
	private:
		std::string const	_name;
		int const			_gradeToSign;
		bool				_isSigned;
};

std::ostream	&operator<<(std::ostream &os, Form const &form);

#endif
