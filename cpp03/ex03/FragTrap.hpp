/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:54:19 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/31 20:46:49 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:

	int			_hitpoints;
	int			_attackdamage;
	
	public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap(void);

	void	highFivesGuys(void);

};

#endif