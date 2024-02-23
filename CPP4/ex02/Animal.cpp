/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:59:21 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/23 13:53:21 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    type.assign("NULL");
}

Animal::Animal(Animal const &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal  &Animal::operator=(Animal const &OpeCopy)
{
    this->type = OpeCopy.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}