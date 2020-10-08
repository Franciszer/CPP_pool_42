/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 13:08:39 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/08 18:40:27 by frthierr         ###   ########.fr       */
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
		unsigned int	middle = this->_current / 2 - 1;
		unsigned int	fst = tmp[middle] - tmp[middle - 1];
		unsigned int	snd = tmp[middle + 1] - tmp[middle];
		return (fst < snd ? fst : snd);
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
