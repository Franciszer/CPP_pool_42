/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:30:33 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 16:31:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSNAME_HPP

# define CLASSNAME_HPP

# include <iostream>
# include <iomanip>
# include <string>

class ISpaceMarine
{
    public:
    virtual ~ISpaceMarine() {}
    virtual ISpaceMarine* clone() const = 0;
    virtual void battleCry() const = 0;
    virtual void rangedAttack() const = 0;
    virtual void meleeAttack() const = 0;
};

#endif
