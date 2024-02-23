/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:57:17 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/23 13:58:48 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
  protected:
    std::string type;
  public:
    Animal();
    Animal(Animal const &_copy);
    Animal &operator=(Animal const &_OpCopy);
    /* 
      virtual destructor to prevent issues when deleting 
      an instance of a derivated class 
      through a pointer of the base class 
    */
    virtual ~Animal();

    /* virtual abstract here to make the method makeSound dynamic to the subclass type
      AND not instanciable haha */
    virtual void    makeSound(void) = 0;
    std::string getType(void) const;
};

#endif