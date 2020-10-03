/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:22:14 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 15:42:16 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
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
	
	std::cout << std::endl << "COPY TEST" << std::endl;
	std::cout << a;	
	std::cout << b;	
	std::cout << c;	
	return 0;
}