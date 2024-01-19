/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:25:37 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/31 17:19:48 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>
# include <cstdlib>

class Brain
{
	public:
	
	std::string		ideas[100];

	Brain(void);
	Brain(const Brain &copy);
	Brain &operator=(const Brain &rhs);
	~Brain(void);

	std::string	*getIdeas(void);
	void		setIdeas(std::string *ideas);
	void		printIdeas(void) const;
};

#endif