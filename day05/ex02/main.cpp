/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:22:14 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 18:59:05 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

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
		robotForm.execute(corruptFellow);


	PresidentialPardonForm	presidentialForm("didierLeMeurtrier");
	Bureaucrat			god("Macrron", 1);

	presidentialForm.beSigned(god);
	presidentialForm.execute(god);
	return 0;
}