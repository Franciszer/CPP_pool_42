/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:02:25 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/07 17:52:13 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>

template <typename T>
void	iter(T *array, int size, void (*func)(T const &)) {
	for(int i = 0 ; i < size ; i++)
		func(array[i]);
}

template <typename T>
void	print_iter(T const &i) {
	std::cout << i << std::endl;
}

int		main(void) {
	int a[] = {1,2,3,4,5,6,7,8};

	std::cout << "TEST FLOATS" << std::endl;
	iter(a, sizeof(a)/sizeof(a[0]), print_iter);

	std::cout << std::endl << "STRING TESTS" << std::endl;
	std::string strs[] = {"hello", "how", "are", "you", "?"};
	iter(strs, sizeof(strs)/sizeof(strs[0]), print_iter);
}


//	CORRECTION TESTS


// class Awesome {

// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }

// 	private:
// 		int _n;
// };


// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {

// 	int tab[] = { 0, 1, 2, 3, 4 }; 
// 	Awesome tab2[5];

// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );

// return 0;
// }