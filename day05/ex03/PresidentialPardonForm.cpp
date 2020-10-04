/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 18:42:58 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/04 14:09:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form(PresidentialPardonForm::_name, 25, 5),
_target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
Form(src),
_target(src._target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	if (this != &src)
		*this = src;
	return *this;
}

std::string				PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void					PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::cout << this->_target + " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::string const	PresidentialPardonForm::_name = std::string("presidential pardon");
