/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:12:25 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/29 15:18:31 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a;
	ScavTrap b("Delila");
	ScavTrap c(b);

	a.attack("");
	a.attack("Meat");
	a.attack("Meat");
	a.attack("Meat");
	a.attack("Meat");
	a.attack("Meat");
	a.attack("Meat");
	a.attack("Meat");
	a.attack("Meat");
	a.attack("Meat");
	a.attack("Meat");
	a = b;
	a.attack("Meat");
	a.takeDamage(5);
	a.takeDamage(95);
	b.takeDamage(15);
	b.beRepaired(10);
	b.attack("Lord bicycle");
	c.takeDamage(5);
	c.takeDamage(-20);
	c.beRepaired(-50);
	c.beRepaired(100);
	c.beRepaired(100);
	c.beRepaired(100);
	c.beRepaired(100);
	c.beRepaired(100);
	c.beRepaired(100);
	c.beRepaired(100);
	c.beRepaired(100);
	c.beRepaired(100);
	c.beRepaired(100);
	c.beRepaired(100);
	c.guardGate();
}
