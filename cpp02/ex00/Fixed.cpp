/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:44:19 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/18 16:11:40 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _integer(0)
{
	std::cout << "Number constructed" << std::endl;
}

Fixed::Fixed(Fixed const &input)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = input;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Equal operator overflow called" << std::endl;
	if (this != &rhs)
		this->_integer = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Number deconstructed" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "'Get' function called" << std::endl;
	return (this->_integer);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "'Set' function called" << std::endl;
	this->_integer = raw;
}