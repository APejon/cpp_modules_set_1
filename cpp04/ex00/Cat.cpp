/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:26:04 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/31 17:22:33 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _type("Cat")
{
	std::cout << "Cat Default Constructor Used" << std::endl;
}

Cat::Cat(std::string type): _type(type)
{
	std::cout << "Cat Parametarised Constructor Used" << std::endl;
}

Cat::Cat(Cat const & copy): Animal(copy)
{
	std::cout << "Cat Copy Constructor Used" << std::endl;
	*this = copy;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Equals Operator Used" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor Used" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat makeSound Function Used" << std::endl;
	std::cout << "Cat has made a sound... meowlicious" << std::endl;
}

std::string Cat::getType() const
{
	std::cout << "Cat 'getType' Function Used" << std::endl;
	return(this->_type);
}