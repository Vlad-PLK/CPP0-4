/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:01:45 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 17:02:50 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
    WrongCat();
    WrongCat(WrongCat const &_copy);
    WrongCat &operator=(WrongCat const &_OpCopy);
    ~WrongCat();

    void makeSound(void) const;
};

#endif