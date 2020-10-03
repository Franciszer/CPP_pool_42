/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 14:55:16 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 16:23:05 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):
_name(name),
_grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src):
_name(src._name),
_grade(src._grade)
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src) {
	if (this != &src)
		*this = src;
	return *this;
}

int				Bureaucrat::getGrade() const {
	return this->_grade;
}

std::string		Bureaucrat::getName() const {
	return this->_name;
}

void			Bureaucrat::incrementGrade() {
	--this->_grade;
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	return ;
}

void			Bureaucrat::decrementGrade() {
	++this->_grade;
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	return ;
}

const char		*Bureaucrat::GradeTooLowException::what() const throw() {
	return "Exception: grade too low";
}

const char		*Bureaucrat::GradeTooHighException::what() const throw() {
	return "Exception: grade too high";
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return os;
}

void			Bureaucrat::signForm(Form &form) const {
	try {
		form.beSigned(*this);
		std::cout << this->_name + " signs "  + form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->_name + " cannot sign " + form.getName() + " because:" << std::endl << "\t"\
			<< e.what() << std::endl;
	}	
}
