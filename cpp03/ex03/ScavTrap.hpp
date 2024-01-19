/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:36:50 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/31 20:46:51 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:

	int			_energypoints;
	
	public:
	
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & copy);
	ScavTrap & operator=(ScavTrap const & rhs);
	~ScavTrap(void);

	void	guardGate(void);
	void	attack(const std::string & target);

};

#endif