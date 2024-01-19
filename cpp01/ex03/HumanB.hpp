/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:59:51 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/14 16:50:59 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string 	_name;
		Weapon 			*_weapon;
	
	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon *weapon);
		void attack(void);
};

#endif