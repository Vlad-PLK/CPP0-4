/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:06:36 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 16:50:25 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
  public:
    Cat();
    Cat(Cat const &_copy);
    Cat &operator=(Cat const &_OpCopy);
    ~Cat();

    virtual void makeSound(void) const;
};

#endif