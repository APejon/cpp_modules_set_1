/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:59:43 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/16 15:20:55 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "HumanA is born" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA died" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	if (this->_weapon.getType().empty())
		std::cout << "fists" << std::endl;
	else
		std::cout << this->_weapon.getType() << std::endl;
}