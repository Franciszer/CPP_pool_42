/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:38:22 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/07 15:50:53 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>

template <typename T>
void	swap(T &a, T &b) {
	T	tmp = b;
	b = a;
	a = tmp;
	return;
}

template <typename T>
T		const&min(T const &a, T const &b) {
	return (a < b ? a : b);
}

template <typename T>
T		const&max(T const &a, T const &b) {
	return (a > b ? a : b);
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}