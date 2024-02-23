/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:36:47 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/12 18:12:10 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string w_type);
    const std::string &getType(void);
    void               setType(std::string new_type);
};

#endif