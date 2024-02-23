/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:04:49 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/07 10:12:50 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <iostream>

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

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &n)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_n = n.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_n);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _n = raw;
}