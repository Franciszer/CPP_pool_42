/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TArray.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:54:16 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/07 18:58:38 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARRAY_HPP

# define TARRAY_HPP

# include <iostream>
# include <iomanip>
# include <string>

template<typename T>
class Array {
	public:
		Array(void):
		_size(0),
		_array(new T[0])
		{}
		
		Array(unsigned int n):
		_size(n)
		{
			this->_array = new T[n];
		}
		
		Array(Array const &src): _size(src._size), _array(new T[src._size]) {
			if (src._array)
				for (unsigned int i = 0; i < src._size; i++) this->_array[i] = src._array[i];}
		virtual ~Array(void) {delete [] this->_array;}

		Array   		&operator=(Array const &src) {
			if (this != &src) {
				this->_size = src._size;
				this->_array = new T[this->_size];
				if (src._array)
					for (unsigned int i =0; i < this->_size; i++) this->_array[i] = src._array[i];
			}
			return *this;
		}
		
		int				size(void) const {return this->_size;}
		int				getArray(void) const {return this->_array;}
		class			outOfBoundsException: public std::exception {
			virtual const char	*what() const throw() {return "index is out of bounds";}
		};
		
		T				&operator[](unsigned int i) {
			if (!this->_array || i >= this->_size)
				throw	Array::outOfBoundsException();
			return this->_array[i];
		}
	private:
		unsigned int	_size;
		T				*_array;

};

#endif
