/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:13:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 16:17:06 by myprosku         ###   ########.fr       */
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
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(Fixed const &a, Fixed const &b);
	Fixed & operator = (Fixed const & rhs);
	bool operator > (Fixed const & rhs) const;
	bool operator < (Fixed const & rhs) const;
	bool operator <= (Fixed const & rhs) const;
	bool operator >= (Fixed const & rhs) const;
	bool operator != (Fixed const & rhs) const;
	bool operator == (Fixed const & rhs) const;
	Fixed  operator + (Fixed const & rhs);
	Fixed  operator - (Fixed const & rhs);
	Fixed  operator * (Fixed const & rhs);
	Fixed  operator / (Fixed const & rhs);
	Fixed&  operator ++();
	Fixed  operator ++(int);
	Fixed&  operator --();
	Fixed  operator --(int);

};

std::ostream & operator << (std::ostream & o, const Fixed & obj);

#endif