/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:25:38 by amalbrei          #+#    #+#             */
/*   Updated: 2023/08/02 18:52:01 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal Default Constructor Used" << std::endl;
}

Animal::Animal(std::string ani_type): _type(ani_type)
{
	std::cout << "Animal Parametarised Constructor Used" << std::endl;
}

Animal::Animal(Animal const & copy)
{
	std::cout << "Animal Copy Constructor Used" << std::endl;
	*this = copy;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal Equals Operator Used" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Deconstructor Used" << std::endl;
}
