/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:46:56 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/04 13:56:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute):
_name(name),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute),
_isSigned(false)
{
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw GradeTooHighException();
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw GradeTooLowException();
	return ;
}

Form::Form(Form const &src):
_name(src._name),
_gradeToSign(src._gradeToSign),
_gradeToExecute(src.getGradeToExecute()),
_isSigned(false)
{
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw GradeTooHighException();
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw GradeTooLowException();
	return ;
}

Form::~Form(void) {
	return ;
}

Form	&Form::operator=(Form const &src) {
	if (this != &src)
		*this = src;
	return *this;
}

std::string	Form::getName() const {
	return this->_name;
}

int			Form::getGradeToSign() const {
	return this->_gradeToSign;
}

bool		Form::getIsSigned() const {
	return this->_isSigned;
}

int			Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

const char	*Form::GradeTooLowException::what() const throw() {
	return "Exception:: grade too low";
}

const char	*Form::GradeTooHighException::what() const throw() {
	return "Exception:: grade too high";
}

const char	*Form::UnsignedFormException::what() const throw() {
	return "Exception:: form is not signed";
}

std::ostream	&operator<<(std::ostream &os, Form const &form) {
	std::string	tail = form.getIsSigned() ? "was already signed" : "has yet to be signed";
	os << "The form " + form.getName() + " requires grade " << form.getGradeToSign()\
	<< " to be signed and grade " << form.getGradeToExecute() <<  " to be executed. It " + tail + "." << std::endl;
	return os; 
}

void			Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_isSigned = true;
}

void			Form::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->_gradeToExecute)
		throw Form::GradeTooLowException();
	else if (!this->_isSigned)
		throw Form::UnsignedFormException();
	return ;
}