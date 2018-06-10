/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:12:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/04 17:12:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int inNum)
{
	_fixPoint = inNum << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float floNum)
{
	_fixPoint = roundf(floNum * 256);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
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


Fixed & Fixed::operator = (Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return *this;
}


std::ostream & operator<<(std::ostream & o, Fixed const & obj)
{
	o << obj.toFloat();
	return o;
}