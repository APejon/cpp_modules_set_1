/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:36:57 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/26 18:36:29 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default Scavtrap Constructor Used" << std::endl;
	this->_name = "Noname";
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Scavtrap Constructor Used" << std::endl;
	if (name.length())
		this->_name = name;
	else
		this->_name = "Noname";
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & copy): ClapTrap(copy)
{
	std::cout << "Scavtrap Copy Constructor Used" << std::endl;
	*this = copy;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Equals Operator Used" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energypoints = rhs._energypoints;
		this->_attackdamage = rhs._attackdamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default Scavtrap Deconstructor Used" << std::endl;
}

void	ScavTrap::attack(const std::string & target)
{
	std::cout << this->_name << " attacks! (Minion)" << std::endl;
	if (this->_hitpoints && this->_energypoints)
	{
		if (target.length())
		{
			std::cout << this->_name << " attacks " << target << ", causing "
			<< this->_attackdamage << " points of damage!" << std::endl;		
		}
		else
		{
			std::cout << "Target has not been set" << std::endl;
		}
		this->_energypoints -= 1;
		std::cout << this->_energypoints << " energy left" << std::endl;
	}
	else if (!this->_hitpoints)
		std::cout << "Wait... they're dead" << std::endl;
	else if (!this->_energypoints)
		std::cout << "They're Out of energy..." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "guardGate() function is called" << std::endl;
	std::cout << this->_name << "is in guard mode!" << std::endl;
}