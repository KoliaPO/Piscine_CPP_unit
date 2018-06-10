/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:12:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/05 16:21:01 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixPoint(0)
{
}

Fixed::Fixed(int inNum)
{
	_fixPoint = inNum << _bits;
}

Fixed::Fixed(float floNum)
{
	_fixPoint = roundf(floNum * 256);
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

void	Fixed::setRawBits(int const raw)
{
	_fixPoint = raw;
}

int 	Fixed::getRawBits() const
{
	return _fixPoint;
}

float	Fixed::toFloat() const
{
	return ((float)_fixPoint / 256);
}

int		Fixed::toInt() const
{
	return (_fixPoint >> _bits);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return b;
	return a;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return b;
	return a;
}

Fixed & Fixed::operator = (Fixed const &rhs)
{
	setRawBits(rhs.getRawBits());
	return *this;
}

bool  Fixed::operator < (Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator > (Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}
bool Fixed::operator >= (Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}
bool Fixed::operator <= (Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}
bool Fixed::operator == (Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}
bool Fixed::operator != (Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed  Fixed::operator+(Fixed const &rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++()
{
	_fixPoint++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed& Fixed::operator--()
{
	_fixPoint--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

std::ostream & operator<<(std::ostream & o, Fixed const & obj)
{
	o << obj.toFloat();
	return o;
}