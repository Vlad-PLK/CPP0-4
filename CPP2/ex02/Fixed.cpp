/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:04:49 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/07 10:05:51 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
    _n = 0;
}

Fixed::Fixed(Fixed const &new_fixed)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = new_fixed;
}

Fixed::Fixed(int const i)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_n = (i << this->_bits);
}

Fixed::Fixed(float const i)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_n = roundf(i * pow(2, this->_bits));
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &n)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    this->_n = n.getRawBits();
    return (*this);
}

Fixed   &Fixed::operator++(void)
{
    /* std::cout << "Pre-increment operator called" << std::endl */
    this->_n++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    /* std::cout << "Post-increment operator called" << std::endl */
    Fixed tmp = *this;
    _n++;
    return (tmp);
}

Fixed   &Fixed::operator--(void)
{
    /* std::cout << "Pre-decrement operator called" << std::endl */
    this->_n--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    /* std::cout << "Post-decrement operator called" << std::endl */
    Fixed tmp = *this;
    _n--;
    return (tmp);
}

Fixed   Fixed::operator+(Fixed const &p) const
{
    Fixed   tmp;

    //std::cout << "Addition operator called" << std::endl;
    tmp.setRawBits(this->_n + p.getRawBits());
    return (tmp);
}

Fixed   Fixed::operator-(Fixed const &s) const
{
    Fixed   tmp;

    //std::cout << "Substraction operator called" << std::endl;
    tmp.setRawBits(this->_n - s.getRawBits());
    return (tmp);
}

Fixed   Fixed::operator*(Fixed const &m) const
{
    //std::cout << "Multiplication operator called" << std::endl;
    Fixed   tmp;

    tmp.setRawBits((this->_n * m.getRawBits()) >> _bits);
    return (tmp);
}

Fixed   Fixed::operator/(Fixed const &d) const
{
    //std::cout << "Division operator called" << std::endl;
    Fixed   tmp;

    tmp.setRawBits((this->_n << _bits) / d.getRawBits());
    return (tmp);
}

bool   Fixed::operator<(Fixed const &n1) const
{
    return (this->_n < n1.getRawBits());
}

bool   Fixed::operator<=(Fixed const &le) const
{
    return (this->_n <= le.getRawBits());
}

bool   Fixed::operator>(Fixed const &m) const
{
    return (this->_n > m.getRawBits());
}

bool   Fixed::operator>=(Fixed const &me) const
{
    return (this->_n >= me.getRawBits());
}

bool   Fixed::operator==(Fixed const &e) const
{
    return (this->_n == e.getRawBits());
}

bool   Fixed::operator!=(Fixed const &ne) const
{
    return (this->_n != ne.getRawBits());
}

Fixed   Fixed::min(Fixed &s1, Fixed &s2)
{
    if (s1 < s2)
        return s1;
    else
        return s2;
}

Fixed   Fixed::min(Fixed const &s1, Fixed const &s2)
{
    if (s1 < s2)
        return s1;
    else
        return s2;
}

Fixed   Fixed::max(Fixed &S1, Fixed &S2)
{
    if (S1 > S2)
        return S1;
    else
        return S2;
}

Fixed   Fixed::max(Fixed const &S1, Fixed const &S2)
{
    if (S1 > S2)
        return S1;
    else
        return S2;
}

std::ostream    &operator<<(std::ostream &o, Fixed const & fpr)
{
    o << fpr.toFloat();
    return (o);
}

int Fixed::getRawBits() const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (_n);
}

void    Fixed::setRawBits(int const raw)
{
    /* std::cout << "setRawBits member function called" << std::endl */
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