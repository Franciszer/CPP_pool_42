/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:11:36 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/09 10:21:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    sp.addNumber(1);
    sp.addNumber(17);
    sp.addNumber(1);
    sp.addNumber(11);
	try {
		sp.addNumber(2);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    try
    {
        std::cout << "shortest: " <<  sp.shortestSpan() << std::endl;
        std::cout << "longest: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    Span sp2 = Span(20000);

	sp2.addNumber(10);
    try
    {
		sp2.addNumber(1, 20000);
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

	Span	assignCopy(sp2);
	Span	opCopy = sp;

	 std::cout << "assignCopy longestSpan: " << assignCopy.longestSpan() << std::endl;
        std::cout << "opCopy longestSpan: " << opCopy.longestSpan() << std::endl;
}
