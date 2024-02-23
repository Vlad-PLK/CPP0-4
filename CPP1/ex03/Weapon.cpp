/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:41:53 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/12 18:12:32 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string tp)
{
    type = tp;
}

const std::string& Weapon::getType(void)
{
    return (type);
}

void    Weapon::setType(std::string new_type)
{
    type = new_type;
}