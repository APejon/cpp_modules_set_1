/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:37:12 by amalbrei          #+#    #+#             */
/*   Updated: 2023/08/27 15:18:53 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.hpp"

int main(int ac, char **av)
{
	int				i;
	std::string		buffer;

	i = 0;
	if (ac == 4)
	{
		std::string		str(av[1]);
		std::ifstream	input(str.c_str());
		if (input.good())
		{
			while (std::getline(input, buffer))
				i++;
			input.close();
			std::ifstream	input(str.c_str());
			std::ofstream	output((str.append(".replace")).c_str());
			if (output.good())
			{
				while (std::getline(input, buffer))
				{
					search_replace(buffer, av[2], av[3]);
					output << buffer;
					if (--i)
						output << std::endl;
				}
				output.close();
			}
			input.close();
		}
		else
			std::cout << "The file could not be opened or missing" << std::endl;
	}
	else 
		std::cout << "Invalid number of arguments, reminder:\n <filename> s1 s2" << std::endl;

	return (0);
}
