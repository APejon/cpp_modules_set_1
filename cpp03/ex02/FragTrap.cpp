/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:54:11 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/29 15:24:09 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Fragtrap Constructor Used" << std::endl;
	this->_name = "Noname";
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Fragtrap Constructor Used" << std::endl;
	if (name.length())
		this->_name = name;
	else
		this->_name = "Noname";
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
}

FragTrap::FragTrap(FragTrap const & copy): ClapTrap(copy)
{
	// std::cout << "Fragtrap Copy Constructor Used" << std::endl;
	*this = copy;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
	// std::cout << "FragTrap Equals Operator Used" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energypoints = rhs._energypoints;
		this->_attackdamage = rhs._attackdamage;
	}
	return (*this);
}


FragTrap::~FragTrap()
{
	std::cout << "Default Fragtrap Deconstructor Used" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "HIGHFIVE!!!.....don't leave me hangin" << std::endl;
}