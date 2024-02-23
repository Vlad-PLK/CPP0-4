/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewFile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:08:31 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/28 17:05:00 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include "NewFile.hpp"

void NewFile::setSize(std::size_t size)
{
    _size = size;
}

void NewFile::setIndex(std::size_t index)
{
    _index = index;
}

void NewFile::setIndexS2(std::size_t indexS2)
{
    _indexS2 = indexS2;
}

std::size_t NewFile::getSize() const
{
    return(_size);
}

std::size_t NewFile::getIndex() const
{
    return(_index);
}

std::size_t NewFile::getIndexS2() const
{
    return(_indexS2);
}

std::string NewFile::getString(int n)
{
    if (n == 1)
        return (_s1);
    else if (n == 2)
        return (_s2);
    else
        return (NULL);
}

void    NewFile::setString(std::string s1, std::string s2)
{
    _s1.assign(s1);
    _s2.assign(s2);
}

std::string NewFile::getFileName(int n) const
{
    if (n == 1)
        return (_infile_name);
    else if (n == 2)
        return (_outfile_name);
    else
        return (NULL);
}

void    NewFile::setFileName(std::string name)
{
    _infile_name.assign(name);
    _outfile_name.assign(name);
    _outfile_name.append(".replace");
}