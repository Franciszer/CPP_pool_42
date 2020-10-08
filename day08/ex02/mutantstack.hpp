/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:40:33 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/08 18:14:29 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP

# define MUTANT_STACK_HPP

# include <iostream>
# include <iomanip>
# include <string>

# include <stack>
# include <deque>


template<typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack(void): std::stack<T>() {};
		MutantStack(std::stack<T> const &src): std::stack<T>(src) {};
		MutantStack(MutantStack const &src): std::stack<T>(src) {};
		virtual ~MutantStack(void) {};

		typedef typename std::stack<T>::container_type::iterator iterator;
		// container_type refers to the container embedded in the stack, which can be a dequeue, a vector, etc (see c++ doc for more information)
		
		using std::stack<T>::operator=;

		// c is the container embedded in the stack
		iterator begin(void) { return std::begin(std::stack<T>::c); }
		iterator end(void) { return std::end(std::stack<T>::c); }
		
	private:
		
};

#endif
