/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:25:45 by amalbrei          #+#    #+#             */
/*   Updated: 2023/08/01 18:22:52 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include "Brain.hpp"
# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	
	public:

	Animal(void);
	Animal(std::string ani_type);
	Animal(Animal const & copy);
	Animal & operator=(Animal const & rhs);
	virtual ~Animal(void);

	virtual	void 			makeSound() const;
	virtual std::string		getType() const;
};

#endif