/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:04:16 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/03 16:51:47 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
    int _n;
    static int const _bits = 8;
public:
    /* Default Constructor */
    Fixed();
    /* Copy Constructor */
    Fixed(Fixed const &_copy);
    /* Operateur d'affectation */
    Fixed &operator=(Fixed const &_newN);
    /* Default Destructor */
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif