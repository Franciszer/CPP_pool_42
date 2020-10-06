/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 17:57:14 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/06 17:59:17 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATA_HPP

# define DATA_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <chrono>

typedef struct Data { std::string s1; int n; std::string s2; } Data;

void 	*serialize(void);
Data 	*deserialize(void * raw);

#endif
