/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:04:16 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/04 11:33:20 by vpolojie         ###   ########.fr       */
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
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream&   operator<<(std::ostream &os, Fixed const & _fpr);

#endif