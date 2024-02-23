/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:18:17 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/11 13:29:17 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Megaphone.hpp"
#include <iostream>
#include <string>

void    Megaphone::ft_toupper(void)
{
    unsigned long i;

    i = 0;
    while (i != loud.length())
    {
        loud[i] = toupper(loud[i]);
        std::cout << loud[i];
        i++;
    }
}

int main(int argc, char **argv)
{
    Megaphone m_phone;

    int i;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (argv[i])
        {
            m_phone.loud = argv[i];
            m_phone.ft_toupper();
            i++;
        }
        std::cout << "\n";
    }
    return 0;
}

