/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:25:21 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/13 12:30:53 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
  public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &_copy);
    ScavTrap &operator=(ScavTrap const &_OpCopy);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
  protected:
    static const unsigned int default_hp = 100;
    static const unsigned int default_ep = 50;
    static const unsigned int default_ad = 20;
};

#endif