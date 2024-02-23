/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:06:28 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 16:51:16 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "string"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    *this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& OpeCopy)
{
    this->type = OpeCopy.type;
    std::cout << "Cat assignation operator overload called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meowwwww" << std::endl;
}