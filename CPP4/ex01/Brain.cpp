/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:56:59 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 21:39:55 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain   &Brain::operator=(const Brain &OpeCopy)
{
    for (int i=0; i != 100; i++)
        this->ideas[i] = OpeCopy.ideas[i];
    std::cout << "Brain assignation operator overload called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}