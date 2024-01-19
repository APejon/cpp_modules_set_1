/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:52:12 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/29 18:06:49 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:

	std::string	_type;
	
	public:

	WrongCat(void);
	WrongCat(std::string type);
	WrongCat(WrongCat const & copy);
	WrongCat & operator=(WrongCat const & rhs);
	~WrongCat(void);
	
	void		makeSound(void) const;
	std::string	getType(void) const;
};

#endif