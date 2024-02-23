/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:46:39 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/12 18:31:05 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
    Weapon  *weapon;
    std::string name;
public:
    HumanB(std::string human_name);
    void    setWeapon(Weapon &w);
    void    attack();
};

#endif