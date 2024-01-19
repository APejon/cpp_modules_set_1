/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:12:25 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/31 16:13:07 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap a;
	FragTrap b("Delila");
	FragTrap c(b);

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
	a.takeDamage(5);
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
	c.highFivesGuys();
}
