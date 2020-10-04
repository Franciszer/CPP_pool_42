/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 17:06:53 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 18:57:17 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form(ShrubberyCreationForm::_name, 145, 137),
_target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
Form(src),
_target(src._target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	if (this != &src)
		*this = src;
	return *this;
}

std::string				ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void					ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::ofstream	output(this->_target + "_shrubbery", std::ofstream::out | std::ofstream::app);

	if (output.bad() || !output.is_open())
		throw FileOpenException();
	for (int i = 0 ; i < 3 ; i++)
		output << ShrubberyCreationForm::_tree[i];
	output << std::endl;
	output.close();
}

std::string const	ShrubberyCreationForm::_name = std::string("shrubbery creation");

std::string const ShrubberyCreationForm::_tree[3] = {
	"      /\\\n" \
	"     /\\*\\\n" \
	"    /\\O\\*\\\n" \
	"   /*/\\/\\/\\\n" \
	"  /\\O\\/\\*\\/\\\n" \
	" /\\*\\/\\*\\/\\/\\\n" \
	"/\\O\\/\\/*/\\/O/\\\n" \
	"      ||\n" \
	"      ||\n" \
	"      ||\n",
	"         v\n" \
	"        >X<\n" \
	"         A\n" \
	"        d$b\n" \
	"      .d\\$$b.\n" \
	"    .d$i$$\\$$b.\n" \
	"       d$$@b\n" \
	"      d\\$$$ib\n" \
	"    .d$$$\\$$$b\n" \
	"  .d$$@$$$$\\$$ib.\n" \
	"      d$$i$$b\n" \
	"     d\\$$$$@$b\n" \
	"  .d$@$$\\$$$$$@b.\n" \
	".d$$$$i$$$\\$$$$$$b.\n" \
	"        ###\n" \
	"        ###\n" \
	"        ###\n",
	"         *\n" \
	"        /|\\\n" \
	"       /*|O\\\n" \
	"      /*/|\\*\\\n" \
	"     /X/O|*\\X\\\n" \
	"    /*/X/|\\X\\*\\\n" \
	"   /O/*/X|*\\O\\X\\\n" \
	"  /*/O/X/|\\X\\O\\*\\\n" \
	" /X/O/*/X|O\\X\\*\\O\\\n" \
	"/O/X/*/O/|\\X\\*\\O\\X\\\n" \
	"        |X|\n" \
	"        |X|\n"
};

const char	*ShrubberyCreationForm::FileOpenException::what() const throw() {
	return "Shrubbery Creation Form Exception:: target file couldn't be opened";
}
