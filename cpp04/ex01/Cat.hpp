/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:26:09 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/30 16:42:17 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:

	Brain		*_brain;
	
	protected:

	std::string	_type;
	
	public:

	Cat(void);
	Cat(std::string type);
	Cat(Cat const & copy);
	Cat & operator=(Cat const & rhs);
	~Cat(void);
	
	void		makeSound(void) const;
	std::string	getType(void) const;
	Brain		*getBrain(void) const;
};

#endif