/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:55:17 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/07 21:48:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TArray.hpp"

int	main(void)
{
    Array<std::string> a(2);
    Array<int>          b(3);
    Array<int>          c;

    try
    {
        std::cout << c[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        a[0] = "TEST";
        a[1] = "YO";
        a[2] = "YO";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "a[0]: " << a[0] << std::endl;
        std::cout << "a[1]: " << a[1] << std::endl; 
        std::cout << "a[2]: " << a[2] << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    std::cout << "b[0]: " << b[0] << std::endl;
    std::cout << "b[1]: " << b[1] << std::endl;
    std::cout << "b[2]: " << b[2] << std::endl;

    c = b;
    std::cout << "c[0]: " << c[0] << std::endl;
    std::cout << "c[1]: " << c[1] << std::endl;
    std::cout << "c[2]: " << c[2] << std::endl;
    c[1] = 4;
    std::cout << "c[1]: " << c[1] << std::endl;
    std::cout << "b[1]: " << b[1] << std::endl;


    Array<int>          d(c);
    d[1] = 2;
    std::cout << "d[1]: " << d[1] << std::endl;
    std::cout << "c[1]: " << c[1] << std::endl;

    std::cout << b.size() << std::endl;

    std::cout << std::endl << "TESTS COPY" << std::endl;

    Array<std::string> assignationCopy(a);
    Array<std::string>  operatorCopy = a;
    
	return 0;
}