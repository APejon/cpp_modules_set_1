/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:29:00 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/31 17:12:58 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain Constructor Used" << std::endl;
	std::string ideas[10] = {"IDEA1", "IDEA2", "IDEA3", "IDEA4",
		"IDEA5", "IDEA6", "IDEA7", "IDEA8", "IDEA9", "IDEA10"};
	
	for (int i = 0; i < 10; i++)
		this->ideas[i] = ideas[rand() % 10];
	for (int i = 0; i < 10; i++)
		std::cout << this->ideas[i] << " ";
	std::cout << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor Used" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 10; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return(*this);
}

Brain::~Brain()
{
	std::cout << "Default Brain Destructor Used" << std::endl;
}

std::string *Brain::getIdeas()
{
	return(this->ideas);
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int i = 0; i < 10; i++)
		this->ideas[i] = ideas[i];
}

void	Brain::printIdeas() const
{
	for (int i = 0; i < 10; i++)
		std::cout << this->ideas[i] << " ";
	std::cout << std::endl;
}