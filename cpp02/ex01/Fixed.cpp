/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:44:19 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/29 14:46:43 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <ostream>

Fixed::Fixed(): _integer(0)
{
	std::cout << "Number constructed" << std::endl;
}

Fixed::Fixed(const int num): _integer(num)
{
	std::cout << "int number constructed" << std::endl;
	this->setRawBits(num << this->_bits);
}

Fixed::Fixed(const float num): _integer(num)
{
	std::cout << "float number constructed" << std::endl;
	this->setRawBits(roundf(num * (1 << this->_bits)));
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

int		Fixed::getRawBits() const
{
	std::cout << "'Get' function called" << std::endl;
	return (this->_integer);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "'Set' function called" << std::endl;
	this->_integer = raw;
}

int		Fixed::toInt() const
{
	return(this->_integer >> this->_bits);
}

float	Fixed::toFloat() const
{
	return (roundf(this->_integer) / (1 << this->_bits));
}

std::ostream & operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return (out);
}