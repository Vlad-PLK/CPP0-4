/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:06:36 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 21:45:15 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  private:
    Brain *brain;
  public:
    Cat();
    Cat(Cat const &_copy);
    Cat &operator=(Cat const &_OpCopy);
    ~Cat();

    virtual void makeSound(void) const;
};

#endif