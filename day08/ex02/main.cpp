/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:40:36 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/08 18:29:01 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::cout << "Empty: " << (mstack.empty() ? "true" : "false") << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(17);
	std::cout << "push" << std::endl;
	std::cout << "Empty: " << (mstack.empty() ? "true" : "false") << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Empty: " << (mstack.empty() ? "true" : "false") << std::endl;
	mstack.pop();
	std::cout << "pop" << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Empty: " << (mstack.empty() ? "true" : "false") << std::endl;

	for (int i = 0; i < 10; i++)
		mstack.push(i * 2);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << std::endl;
	std::cout << mstack.size() << " items in mstack" << std::endl;
	while (it != ite)
	{
		std::cout << "- " << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	std::stack<int> s(mstack);

	std::cout << "(Copying to mstack2)" << std::endl;
	MutantStack<int> mstack2(s);

	std::cout << std::endl;
	std::cout << s.size() << " items in std::stack" << std::endl;
	while (!s.empty())
	{
		std::cout << "- " << s.top() << std::endl;
		s.pop();
	}


	it = mstack2.begin();
	ite = mstack2.end();
	std::cout << std::endl;
	std::cout << mstack2.size() << " items in mstack2" << std::endl;
	while (it != ite)
	{
		std::cout << "- " << *it << std::endl;
		++it;
	}

	MutantStack<int>	copyStack = mstack2;
	it = mstack.begin();
	ite = mstack.end();
	std::cout << std::endl;
	std::cout << mstack2.size() << " items in mstack2" << std::endl;
	while (it != ite)
	{
		std::cout << "-" << *it << std::endl;
		++it;
	}
	return 0;
}
