/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:04:49 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/04 11:35:37 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _n = 0;
}

Fixed::Fixed(Fixed const &new_fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = new_fixed;
}

Fixed::Fixed(int const i)
{
    std::cout << "Int constructor called" << std::endl;
    this->_n = (i << this->_bits);
}

Fixed::Fixed(float const i)
{
    std::cout << "Float constructor called" << std::endl;
    this->_n = roundf(i * pow(2, this->_bits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &n)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_n = n._n;
    return (*this);
}

std::ostream    &operator<<(std::ostream &o, Fixed const & fpr)
{
    o << fpr.toFloat();
    return (o);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_n);
}

void    Fixed::setRawBits(int const raw)
{
    _n = raw;
}

int     Fixed::toInt(void) const
{
    return (this->_n >> this->_bits);
}

float   Fixed::toFloat(void) const
{
    return (this->_n / pow(2, this->_bits));
}