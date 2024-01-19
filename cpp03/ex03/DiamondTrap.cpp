/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:36:58 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/31 20:47:22 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Default DiamondTrap Constructor Used" << std::endl;
	this->_name = "Noname";
	this->_ClapTrap_name = ClapTrap::_name + "_clap_name";
	ClapTrap::_hitpoints = FragTrap::_hitpoints;
	ClapTrap::_energypoints = ScavTrap::_energypoints;
	ClapTrap::_attackdamage = FragTrap::_attackdamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap Constructor Used" << std::endl;
	this->_name = name;
	this->_ClapTrap_name = ClapTrap::_name + "_clap_name";
	ClapTrap::_hitpoints = FragTrap::_hitpoints;
	ClapTrap::_energypoints = ScavTrap::_energypoints;
	ClapTrap::_attackdamage = FragTrap::_attackdamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	// std::cout << "DiamondTrap Copy Constructor Used" << std::endl;
	*this = copy;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
{
	// std::cout << "DiamonTrap Equals Operator Used" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_ClapTrap_name = ClapTrap::_name + "_clap_name";
		this->_hitpoints = rhs._hitpoints;
		this->_energypoints = rhs._energypoints;
		this->_attackdamage = rhs._attackdamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap Deconstructor Used" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << this->_name << " is my name" << std::endl;
	std::cout << this->_ClapTrap_name << " is my ancestor" << std::endl;
}