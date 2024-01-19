/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:12:16 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/29 15:07:18 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
	private:

	std::string	_name;
	int			_hitpoints;
	int			_energypoints;
	int			_attackdamage;
	
	public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & copy);
	ClapTrap & operator=(ClapTrap const & rhs);
	~ClapTrap(void);
	
	void		attack(const std::string & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif