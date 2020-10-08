/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 12:31:50 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/08 12:56:28 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

# define EASYFIND_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <algorithm>
# include <vector>

template<typename T>
typename T::const_iterator	easyfind(T const &container, int toFind) {
	return std::find(container.begin(), container.end(), toFind);
}

#endif
