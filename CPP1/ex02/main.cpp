/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:33:36 by vpolojie          #+#    #+#             */
/*   Updated: 2023/10/09 16:02:26 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <new>

int main(void)
{
    std::string str;
    std::string *stringPTR;
    std::string &stringREF = str;

    str.assign("HI THIS IS BRAIN");
    stringPTR = &str;

    std::cout << "Address inside str : " << &str << std::endl;
    std::cout << "Address inside stringPTR : " << stringPTR << std::endl;
    std::cout << "Address inside stringREF : " << &stringREF << std::endl;
    std::cout << "Content inside str : " << str << std::endl;
    std::cout << "Content pointed by stringPTR : " << *stringPTR << std::endl;
    std::cout << "Content inside stringREF : " << stringREF << std::endl;
    return (0);
}