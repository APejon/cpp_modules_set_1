/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:02:29 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/15 13:37:13 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl Duck;

	Duck.complain("DEBUG");
	Duck.complain("INFO");
	Duck.complain("WARNING");
	Duck.complain("ERROR");
}