/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:01:31 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 17:02:10 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
  protected:
    std::string type;
  public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &_copy);
    WrongAnimal &operator=(WrongAnimal const &_OpCopy);
    virtual ~WrongAnimal();

    void    makeSound(void) const;
    std::string getType(void) const;
};

#endif