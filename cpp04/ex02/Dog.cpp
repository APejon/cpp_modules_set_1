/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:25:52 by amalbrei          #+#    #+#             */
/*   Updated: 2023/08/01 20:09:07 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): _brain(new Brain()), _type("Dog")
{
	std::cout << "Dog Default Constructor Used" << std::endl;
}

Dog::Dog(std::string type): _brain(new Brain()), _type(type)
{
	std::cout << "Dog Parametarised Constructor Used" << std::endl;
}

Dog::Dog(Dog const & copy): Animal(copy)
{
	std::cout << "Dog Copy Constructor Used" << std::endl;
	*this = copy;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Equals Operator Used" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain();
		this->_brain->setIdeas(rhs._brain->getIdeas());
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor Used" << std::endl;
	delete(this->_brain);
}

void Dog::makeSound() const
{
	std::cout << "Dog makeSound Function Used" << std::endl;
	std::cout << "Dog has made a sound... barked worse than bit" << std::endl;
}

std::string Dog::getType() const
{
	std::cout << "Dog 'getType' Function Used" << std::endl;
	return(this->_type);
}

Brain *Dog::getBrain() const
{
	return(this->_brain);
}