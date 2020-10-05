/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:22:14 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/05 13:55:21 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	ShrubberyCreationForm	shrub("patrick");
	Bureaucrat				samy("samy", 137);

	try {
		shrub.execute(samy);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	shrub.beSigned(samy);
	shrub.execute(samy);

	RobotomyRequestForm	robotForm("yvineLaVictime");
	Bureaucrat			corruptFellow("Balkany", 40);

	robotForm.beSigned(corruptFellow);
	for (int i = 0 ; i < 5; i++)
		corruptFellow.executeForm(robotForm);


	PresidentialPardonForm	presidentialForm("didierLeMeurtrier");
	Bureaucrat			god("Macrron", 1);

	presidentialForm.beSigned(god);
	presidentialForm.execute(god);

	std::cout << shrub;
	std::cout << robotForm;
	std::cout << presidentialForm;

	Intern	noName;
	Form	*forms[3];
	
	forms[0] = noName.makeForm("presidential pardon", "ursuleLaCrapule");
	forms[1] = noName.makeForm("robotomy request", "yvinLePasMalin");
	forms[2] = noName.makeForm("shrubbery creation", "lucyInTheSky");

	noName.makeForm("form that does not exist", "unknownFellow");
	for (int i = 0; i < 3 ; i++) {
		forms[i]->beSigned(god);
		forms[i]->execute(god);
	}
	for (int i = 0 ; i < 3 ; i++)
		delete forms[i];
}