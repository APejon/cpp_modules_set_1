/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:44:10 by amalbrei          #+#    #+#             */
/*   Updated: 2023/07/29 14:46:39 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>
# include <ostream>

class Fixed
{
	private:
	
		int					_integer;
		static const int	_bits = 8;

	public:

		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(Fixed const & input);
		Fixed & operator=(Fixed const & rhs);
		~Fixed(void);
		
		int		getRawBits (void) const;
		void	setRawBits (int const raw);
		int		toInt (void) const;
		float	toFloat (void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif