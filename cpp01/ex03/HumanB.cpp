/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:59:59 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/16 15:24:40 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	std::cout << "HumanB is born" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB died" << std::endl;
}

void HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
}

void HumanB::attack()
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	if (!(this->_weapon))
		std::cout << "fists" << std::endl;
	else if (this->_weapon->getType().empty())
		std::cout << "fists" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
}