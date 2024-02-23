/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:04:16 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/06 17:14:05 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int _n;
    static int const _bits = 8;
public:
    Fixed();
    Fixed(Fixed const &_copy);
    Fixed(int const i);
    Fixed(float const f);
    Fixed &operator=(Fixed const &_newN);
    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed operator--(int);
    Fixed  operator+(Fixed const &_newP) const;
    Fixed  operator-(Fixed const &_newS) const;
    Fixed  operator*(Fixed const &_newM) const;
    Fixed  operator/(Fixed const &_newD) const;
    bool  operator<(Fixed const &_newL) const;
    bool  operator<=(Fixed const &_newLE) const;
    bool  operator>(Fixed const &_newM) const;
    bool  operator>=(Fixed const &_newME) const;
    bool  operator==(Fixed const &_newE) const;
    bool  operator!=(Fixed const &_newNE) const;
    static Fixed  min(Fixed &m1, Fixed &m2);
    static Fixed  min(Fixed const &m1, Fixed const &m2);
    static Fixed  max(Fixed &M1, Fixed &M2);
    static Fixed  max(Fixed const &M1, Fixed const &M2);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream&   operator<<(std::ostream &os, Fixed const & _fpr);

#endif