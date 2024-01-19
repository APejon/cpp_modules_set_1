/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:12:07 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/29 15:11:09 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("NoName"), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "Default Constructor Used" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "Claptrap Constructor Used" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	// std::cout << "Claptrap Copy Used" << std::endl;
	*this = copy;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	// std::cout << "Equals Operator Used" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energypoints = rhs._energypoints;
		this->_attackdamage = rhs._attackdamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default Deconstructor Used" << std::endl;
}

void ClapTrap::attack(const std::string & target)
{
	std::cout << this->_name << " attacks!" << std::endl;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " is hit!" << std::endl;
	if ((int)amount < 0)
		std::cout << "... with healing? " << (int)amount << " points of damage" << std::endl;
	else if ((int)amount >= this->_hitpoints)
	{
		this->_hitpoints = 0;
		std::cout << this->_name << " has perished, bring out another" << std::endl;
	}
	else
	{
		this->_hitpoints -= (int) amount;
		std::cout << this->_name << " takes " << (int)amount << " of damage," << " leaving them with "
		<< this->_hitpoints << " left" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " is repairing..." << std::endl;
	if ((int)amount < 0)
		std::cout << "Masochist much? " << (int)amount << " is what the system says" << std::endl;
	else if (this->_hitpoints && this->_energypoints)
	{
		this->_energypoints -= 1;
		this->_hitpoints += (int) amount;
		std::cout << this->_name << " has "	<< this->_hitpoints << " health" << std::endl;	
	}
	else if (!this->_hitpoints)
		std::cout << "Wait... they're dead" << std::endl;
	else if (!this->_energypoints)
		std::cout << "They're Out of energy..." << std::endl;
}