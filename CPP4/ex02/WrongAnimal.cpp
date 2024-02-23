/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:01:21 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 17:02:11 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    type.assign("NULL");
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &OpeCopy)
{
    this->type = OpeCopy.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Here is an animal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}