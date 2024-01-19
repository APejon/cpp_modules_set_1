/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:58:43 by amalbrei          #+#    #+#             */
/*   Updated: 2023/08/02 18:49:57 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "-----Regular test start-----" << std::endl;
	const Cat* i = new Cat();
	const Dog* j = new Dog();
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
	std::cout << "-----Regular test end-----" << std::endl;
	std::cout << "-----Grouped test start-----" << std::endl;
	int size = 10;
	Animal* animals[size];
	for (int i = 0; i < size + 1; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "---------------------" << std::endl;
	for (int i = size; i > -1; i--)
		delete animals[i];
	std::cout << "-----Grouped test end-----" << std::endl;
	
	return (0);
}