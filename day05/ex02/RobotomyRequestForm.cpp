/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 18:42:58 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 18:49:19 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form(RobotomyRequestForm::_name, 72, 45),
_target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
Form(src),
_target(src._target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
	if (this != &src)
		*this = src;
	return *this;
}

std::string				RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void					RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	for (int i = 0 ; i < 3 ; i++) {
		std::cout << "* DRILLING NOISES *" << std::endl;
	}
	std::srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
	if (std::rand() % 2)
		std::cout << this->_target + " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target + " failed to be robotomized" << std::endl;
	return ;
}

std::string const	RobotomyRequestForm::_name = std::string("robotomy request");
