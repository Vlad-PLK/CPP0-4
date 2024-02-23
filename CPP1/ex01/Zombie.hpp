/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:01:40 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/09 15:01:25 by vpolojie         ###   ########.fr       */
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
    std::string get_name();
    int get_index(void);
    void    set_name(std::string name);
    void    set_index(int index);
    void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif