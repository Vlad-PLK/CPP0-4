/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:06:07 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 19:06:34 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "string"

Dog::Dog() : Animal()
{
    brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    *this = copy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog& OpeCopy)
{
    this->type = OpeCopy.type;
    std::cout << "Dog assignation operator overload called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woufff Woufff" << std::endl;
}