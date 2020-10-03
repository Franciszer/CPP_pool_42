/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:44:01 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 18:28:12 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class Form {
	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const &src);
		virtual ~Form(void);
		
		Form   &operator=(Form const &src);
		void	beSigned(Bureaucrat const &bureaucrat);
		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		bool		getIsSigned() const;
		class	GradeTooLowException: public std::exception {
			virtual const char	*what() const throw();
		};
		class	GradeTooHighException: public std::exception {
			virtual const char	*what() const throw();
		};
		class	UnsignedFormException: public std::exception {
			virtual const char	*what() const throw();
		};
		virtual void	execute(Bureaucrat const &exectuor) const = 0;
	private:
		std::string const	_name;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		bool				_isSigned;
};

std::ostream	&operator<<(std::ostream &os, Form const &form);

#endif
