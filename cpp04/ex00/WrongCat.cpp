/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:47 by amalbrei          #+#    #+#             */
/*   Updated: 2023/08/03 18:40:33 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): _type("WrongCat")
{
	std::cout << "WrongCat Default Constructor Used" << std::endl;
}

WrongCat::WrongCat(std::string type): _type(type)
{
	std::cout << "WrongCat Parametarised Constructor Used" << std::endl;
}

WrongCat::WrongCat(WrongCat const & copy): WrongAnimal(copy)
{
	std::cout << "WrongCat Copy Constructor Used" << std::endl;
	*this = copy;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat Equals Operator Used" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor Used" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat makeSound Function Used" << std::endl;
	std::cout << "WrongCat has made a sound... barkilicious?" << std::endl;
}

std::string WrongCat::getType() const
{
	std::cout << "WrongCat 'getType' Function Used" << std::endl;
	return(this->_type);
}