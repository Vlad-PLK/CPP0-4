/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:02:41 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 16:50:29 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
  public:
    Dog();
    Dog(Dog const &_copy);
    Dog &operator=(Dog const &_OpCopy);
    ~Dog();

    virtual void makeSound(void) const;
};

#endif