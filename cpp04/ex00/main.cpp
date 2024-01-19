/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:25:20 by amalbrei          #+#    #+#             */
/*   Updated: 2023/08/03 18:41:18 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* i = new Cat();
const Animal* j = new Dog();
std::cout << i->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
meta->makeSound();
i->makeSound();
j->makeSound();
const WrongAnimal* k = new WrongAnimal();
const WrongAnimal* k1 = new WrongCat();
std::cout << k->getType() << " " << std::endl;
std::cout << k1->getType() << " " << std::endl;
k->makeSound();
k1->makeSound();
delete meta;
delete j;
delete i;
delete k;
delete k1;
return 0;
}