/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:02:29 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/15 13:46:19 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int check_index(char *av)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4 ; i++)
	{
		if (levels[i] == av)
			return (i);
	}
	return (-1);
}

void pick_complaint(char *av, Harl &Duck)
{
	int	j;

	j = check_index(av);
	switch(j)
	{
		case 0:
			Duck.complain("DEBUG");
			/*fall through*/
		case 1:
			Duck.complain("INFO");
			/*fall through*/
		case 2:
			Duck.complain("WARNING");
			/*fall through*/
		case 3:
			Duck.complain("ERROR");
			break ;
		default:
			std::cout << "Could be quacking profane stuff, filter enabled" << std::endl;		
	}
}

int main(int ac, char **av)
{
	Harl Duck;

	if (ac != 2)
		std::cout << "You misquacked, try again" << std::endl;
	else
		pick_complaint(av[1], Duck);
}
