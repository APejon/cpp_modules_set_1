/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:51:31 by amalbrei          #+#    #+#             */
/*   Updated: 2023/08/03 18:40:24 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor Used" << std::endl;
}

WrongAnimal::WrongAnimal(std::string ani_type): _type(ani_type)
{
	std::cout << "WrongAnimal Parametarised Constructor Used" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
	std::cout << "WrongAnimal Copy Constructor Used" << std::endl;
	*this = copy;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal Equals Operator Used" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor Used" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makeSound Function Used" << std::endl;
	std::cout << "WrongAnimal has made a sound..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	std::cout << "WrongAnimal 'getType' Function Used" << std::endl;
	return(this->_type);
}