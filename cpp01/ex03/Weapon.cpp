/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:59:23 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:59 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::Weapon(std::string type)
{
	std::cout << "Weapon created" << std::endl;
	this->_type = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}

const std::string Weapon::getType()
{
	return(this->_type);
}

void Weapon::setType(std::string input)
{
	this->_type = input;
}