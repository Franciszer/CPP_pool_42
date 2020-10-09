/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 13:08:39 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/09 10:20:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n):
_current(0),
_size(n)
{
	this->_container = vector(n);
	return ;
}

Span::Span(Span const &src):
_current(src._current),
_size(src._size)
{
	this->_container = vector(src._container);
	return ;
}

Span::~Span(void) {
	return ;
}

Span	&Span::operator=(Span const &src) {
	if (this != &src)
		*this = src;
	return *this;
}

void	Span::addNumber(unsigned int n, unsigned int repeat) {
	while (repeat--) {
		if (this->_current != this->_size) {
			this->_container[this->_current] = n;
			++this->_current;	
		}
		else
			throw Span::notEnoughSpaceException();
	}
}

const char	*Span::notEnoughSpaceException::what() const throw() {
	return "exception: not enough space in span";
}

const char	*Span::noSpanToFindException::what() const throw() {
	return "exception: no span to find";
}

unsigned int	Span::shortestSpan() const {
	vector	tmp = vector(this->_container);

	if (this->_current > 1) {
		sort(tmp.begin(), tmp.end());
		int	mspan = tmp[1] - tmp[0];
		int cspan;
		for (unsigned int i = 2 ; i < this->_current; i++) {
			if ((cspan = std::abs(tmp[i] - tmp[i - 1])) < mspan)
				mspan = cspan;
		}
		return (mspan);
	}
	else
		throw Span::noSpanToFindException();
}

unsigned int	Span::longestSpan() const {
	vector	tmp = vector(this->_container);

	if (this->_current >= 1) {
		sort(tmp.begin(), tmp.end());
		return (tmp[this->_current - 1] - tmp[0]);
	}
	else
		throw Span::noSpanToFindException();
}
