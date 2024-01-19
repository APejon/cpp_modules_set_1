/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:50:58 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/29 18:10:01 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal
{
	protected:

	std::string	_type;
	
	public:

	WrongAnimal(void);
	WrongAnimal(std::string ani_type);
	WrongAnimal(WrongAnimal const & copy);
	WrongAnimal & operator=(WrongAnimal const & rhs);
	~WrongAnimal(void);

	void 			makeSound() const;
	std::string		getType() const;
};

#endif