/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:25:21 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/08 14:23:15 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &_copy);
    ScavTrap &operator=(ScavTrap const &_OpCopy);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};

#endif