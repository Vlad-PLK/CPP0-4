/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:46:40 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/12 18:07:49 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
    Weapon  *weapon;
    std::string name;
public:
    HumanA(std::string human_name, Weapon &new_weapon);
    void    setWeapon(Weapon &n_weapon);
    void    attack();
};

#endif