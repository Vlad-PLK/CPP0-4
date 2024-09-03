/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:01:40 by vpolojie          #+#    #+#             */
/*   Updated: 2024/09/03 13:26:15 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <new>

class Zombie
{
private:
    std::string _name;
    int         _index;
public:
    Zombie();
    ~Zombie();
    std::string get_name() const;
    int get_index(void) const;
    void    set_name(std::string name);
    void    set_index(int index);
    void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif