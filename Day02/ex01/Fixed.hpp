/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:13:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/04 17:13:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_fixPoint;
	static const int	_bits = 8;
public:
	Fixed(const Fixed &obj);
	Fixed(int inNum);
	Fixed(float floNum);
	Fixed();
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed & operator = (Fixed const & rhs);
};

std::ostream & operator << (std::ostream & o, const Fixed & obj);


#endif