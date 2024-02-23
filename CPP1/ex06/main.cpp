/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:33:36 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/26 16:49:59 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <new>
#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl    michel;

        michel.set_level(argv[1]);
        michel.complain();
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return (0);
}