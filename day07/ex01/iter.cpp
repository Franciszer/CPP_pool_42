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
void	iter(T *array, int size, void (*func)(T &)) {
	for(int i = 0 ; i < size ; i++)
		func(array[i]);
}

template <typename T>
void	print_iter(T &i) {
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