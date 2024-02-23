/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:56:25 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/21 19:02:19 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
  private:
    std::string ideas[100];
  public:
    Brain();
    Brain(Brain const &_copy);
    Brain &operator=(Brain const &_OpCopy);
    ~Brain();
};

#endif