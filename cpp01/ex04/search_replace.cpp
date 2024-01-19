/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:37:32 by amalbrei          #+#    #+#             */
/*   Updated: 2023/08/27 15:20:38 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.hpp"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void search_replace(std::string &buffer, char *target, char *replace)
{
	std::string	final_str;
	std::string to_find;
	std::string to_replace;
	std::size_t	pos_idx;

	final_str = "";
	to_find = target;
	to_replace = replace;
	pos_idx = buffer.find(to_find);
	while (pos_idx != std::string::npos)
	{
		buffer.erase(pos_idx, to_find.size());
		final_str += buffer.substr(0, pos_idx);
		final_str += to_replace;
		buffer = buffer.substr(pos_idx);
		pos_idx = buffer.find(to_find);
	}
	if (buffer.size() && pos_idx == std::string::npos)
		final_str = final_str + buffer.substr(0, pos_idx);
	buffer = final_str;
}
