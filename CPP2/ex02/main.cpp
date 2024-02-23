/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:02:33 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/07 10:10:05 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Fixed.hpp"

int main( void ) 
{
  Fixed a;
  Fixed b(3);
  Fixed c(30.75f);
  Fixed d(1234);
  Fixed const e(Fixed(1) + Fixed(1));
  Fixed const f(Fixed(20) - Fixed(10));
  Fixed const b1(Fixed(10.5f) / Fixed(2));

  std::cout <<"a = "<< a << std::endl;
  std::cout <<"++a = "<< ++a << std::endl;
  std::cout <<"a = "<< a << std::endl;
  std::cout <<"a++ = "<< a++ << std::endl;
  std::cout <<"a = "<< a << std::endl;
  std::cout <<"--a = "<< --a << std::endl;
  std::cout <<"a = "<< a << std::endl;
  std::cout <<"a-- = "<< a-- << std::endl;
  std::cout <<"a = "<< a << std::endl;
  std::cout <<"b1 = "<< b1 << std::endl;
  std::cout <<"max a,b1 = "<< Fixed::max(a, b1) << std::endl;
  std::cout <<"b = "<< b << std::endl;
  std::cout <<"c = "<< c << std::endl;
  std::cout <<"d = "<< d << std::endl;
  std::cout <<"e = "<< e << std::endl;
  std::cout <<"f = "<< f << std::endl;
  std::cout <<"b * c = "<< b * c << std::endl;
  std::cout <<"c / 4 = "<< c / 4 << std::endl;
  std::cout <<"e + f = "<< e + f << std::endl;
  std::cout <<"min c,d = "<< Fixed::min(c, d) << std::endl;
  std::cout <<"const min e,f = "<<Fixed::min(e,f) << std::endl;
  return 0; 
}