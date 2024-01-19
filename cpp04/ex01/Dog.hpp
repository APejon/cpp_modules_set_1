/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:25:58 by amalbrei          #+#    #+#             */
/*   Updated: 2023/08/28 14:39:53 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:

	Brain		*_brain;

	protected:

	std::string	_type;
	
	public:

	Dog(void);
	Dog(std::string type);
	Dog(Dog const & copy);
	Dog & operator=(Dog const & rhs);
	~Dog(void);

	void		makeSound(void) const;
	std::string	getType(void) const;
	Brain		*getBrain(void) const;
};

#endif