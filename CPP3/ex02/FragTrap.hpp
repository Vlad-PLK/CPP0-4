/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:30:48 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/08 14:42:42 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
    FragTrap(FragTrap const &_copy);
    FragTrap(std::string name);
    FragTrap &operator=(FragTrap const &_OpCopy);
    ~FragTrap();

    void attack(const std::string& target);
    void highFivesGuys();
};

#endif