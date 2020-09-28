/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:08:38 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 22:19:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP

# define MATERIA_SOURCE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        virtual ~MateriaSource(void);

        MateriaSource   &operator=(MateriaSource const &src);
        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);

    private:
        AMateria        *_known_materias[4];
        unsigned int    _count;
};

#endif
