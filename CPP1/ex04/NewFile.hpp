/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewFile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:02:55 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/28 17:04:44 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWFILE_HPP
#define NEWFILE_HPP
#include <string>
#include <iostream>
#include <fstream>

class NewFile
{
private:
    std::string _s1;
    std::string _s2;
    std::string _infile_name;
    std::string _outfile_name;
    std::size_t _size;
    std::size_t _index;
    std::size_t _indexS2;
public:
    std::string line;
    std::string getString(int n);
    void    setSize(std::size_t size);
    void    setIndex(std::size_t index);
    void    setIndexS2(std::size_t indexS2);
    void    setString(std::string s1, std::string s2);
    void    setFileName(std::string name);
    std::string   getFileName(int fn) const;
    std::size_t   getSize(void) const;
    std::size_t   getIndex(void) const;
    std::size_t   getIndexS2(void) const;
};

#endif