/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:42:26 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/30 15:21:43 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "[ " << "DEBUG" << " ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !\n" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ " << "INFO" << " ]" << std::endl;
    std::cout<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ " << "WARNING" << " ]" << std::endl;
    std::cout<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ " << "ERROR" << " ]" << std::endl;
    std::cout<< "This is unacceptable ! I want to speak to the manager now.\n" << std::endl;
}

void    Harl::set_level(std::string level_value)
{
    int i;

    i = 0;
    tab[0].assign("DEBUG");
    tab[1].assign("INFO");
    tab[2].assign("WARNING");
    tab[3].assign("ERROR");
    tab[4].assign("null");
    while (i != 4)
    {
        if (level_value.compare(tab[i]) == 0)
            break ;
        else
            i++;
    }
    if (i == 4)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    else
        int_level = i;
    return ;
}

void    Harl::complain(void)
{
    void (Harl::*funcPtr[4])(void);

    funcPtr[0] = &Harl::debug;
    funcPtr[1] = &Harl::info;
    funcPtr[2] = &Harl::warning;
    funcPtr[3] = &Harl::error;

    switch (int_level)
    {
        case 0:
            for (int i=0; i != 4; i++)
                (this->*funcPtr[i])();
            break;
        case 1:
            for (int i=1; i != 4; i++)
                (this->*funcPtr[i])();
            break;
        case 2:
            for (int i=2; i != 4; i++)
                (this->*funcPtr[i])();
            break;
        case 3:
            for (int i=3; i != 4; i++)
                (this->*funcPtr[i])();
            break;
    }
}