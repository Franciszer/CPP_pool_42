/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:22:14 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 16:26:10 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "BUREAUCRAT TESTS" << std::endl << std::endl;
	try {
		Bureaucrat	metroBoulotScpo("manuLeCocu", 5);
		while (1) {
			metroBoulotScpo.incrementGrade();
			std::cout << metroBoulotScpo.getName() << "grade: " << metroBoulotScpo.getGrade() << std::endl;
		}
	}
	catch (std:: exception &e) {
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat		leonDeLena("leon" , 148);
		while (1) {
			leonDeLena.decrementGrade();
			std::cout << leonDeLena.getName() << "grade: " << leonDeLena.getGrade() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat	highBureaucrat("Bob", 151);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	lowBureaucrat("Bob", 0);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	Bureaucrat	a("a", 12);
	Bureaucrat	b(a);
	Bureaucrat	c = b;
	
	std::cout << std::endl << "BUREAUCRAT COPY TEST" << std::endl;
	std::cout << a;	
	std::cout << b;	
	std::cout << c;

	std::cout << std::endl << "FORM TESTS" << std::endl << std::endl;
	
	Form	simpleForm("simple form", 145);
	Form	simpleFormAssignation(simpleForm);
	Bureaucrat	cafBoss = Bureaucrat("boss de la CAF", 5);
	Bureaucrat	cafardinho = Bureaucrat("cafardinho", 150);
	cafBoss.signForm(simpleForm);
	cafardinho.signForm(simpleFormAssignation);
	
	std::cout << "simple form: " << simpleForm << std::endl;
	std::cout << "simple form assignation copy: " << simpleFormAssignation << std::endl;

	try
	{
		Form	formTooHigh("tooHigh", -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form	formtooLow("tooLow", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}