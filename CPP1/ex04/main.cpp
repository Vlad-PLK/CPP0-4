/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:33:36 by vpolojie          #+#    #+#             */
/*   Updated: 2023/11/03 09:03:21 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include "NewFile.hpp"

int not_empty(std::ifstream& infile)
{
    int         i;
    std::string line;

    i = 0;
    while (getline(infile, line))
        i++;
    infile.clear();
    infile.seekg(0, std::ios::beg);
    if (i > 0)
        return (0);
    else if (i == 0 && line.length() == 0)
        std::cout << "Empty file, try again with another one !" << std::endl;
    return (1);
}

int ft_check_infile(std::ifstream& infile)
{
    if (infile.is_open() == true && infile.good() == true && not_empty(infile) == 0)
        return (0);
    else
    {
        if (infile.bad() == true)
            std::cout << "can't read or write from that file, please check the authorization" << std::endl;
        else if (infile.eof() == true)
            std::cout << "you've reached the end of this file, try to reset position on this one" << std::endl;
        else if (infile.is_open() == false)
            std::cout << "can't open this file, try again" << std::endl;
        return (1);
    }
}

int ft_check_strings(std::ifstream& infile, char **argv)
{
    std::string s1;
    std::string s2;
    std::string line;
    std::size_t found;

    s1.assign(argv[2]);
    s2.assign(argv[3]);
    while (infile)
    {
        std::getline(infile, line);
        found = line.find(s1);
        if (found != std::string::npos)
            break;
    }
    if (found == std::string::npos)
    {
        std::cout << "No occurrences of S1 in infile, please change S1 !" << std::endl;
        return (1);
    }
    if (s1.compare(s2) == 0)
    {
        std::cout << "S1 and S2 are equivalent no replacement needed !" << std::endl;
        return (1);
    }
    return (0);
}

void    ft_sed(char **argv, const char *__infile, const char *s1, const char *s2)
{
    NewFile          nf;
    std::ifstream    infile;
    std::ofstream    outfile;

    nf.setString(s1, s2);
    nf.setFileName(__infile);
    infile.open(nf.getFileName(1), std::ios::in);
    if (ft_check_infile(infile) == 0 && ft_check_strings(infile, argv) == 0)
    {
        outfile.open(nf.getFileName(2), std::ios::out);
        infile.seekg(0);
        outfile.seekp(0);
        while (infile.eof() == false)
        {
            std::getline(infile, nf.line);
            while (nf.line.find(nf.getString(1)) != std::string::npos)
            {
                nf.setIndex(nf.line.find(nf.getString(1)));
                nf.setIndexS2(nf.line.find(nf.getString(1)) + nf.getString(2).size());
                nf.setSize(nf.line.size() - nf.getString(1).size() + nf.getString(2).size() + 2);
                nf.line.assign(nf.line, 0, nf.getSize());
                nf.line.insert(nf.getIndex(), nf.getString(2));
                nf.line.erase(nf.getIndexS2(), nf.getString(1).size());
            }
            outfile << nf.line;
            if (infile.peek() != EOF)
                outfile << std::endl;
            else
                outfile << "\n";
        }
    }
    return ;
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        ft_sed(argv, argv[1], argv[2], argv[3]);
        /*
        /// replace i by a in t1 (multiple i in row) ///
        ft_sed(argv, "tests/t1", "i", "a");
        
        /// replace special by etrange in t2 ///
        ft_sed(argv, "tests/t2", "special", "etrange");
        
         /// t3 is empty ///
        ft_sed(argv, "tests/t3", "hummm", "interessant");
        
        /// replace f by g in t4 ///
        ft_sed(argv, "tests/t4", "f", "g");
        
        /// 1 doesn't exist ///
        ft_sed(argv, "1", "oui", "non");
        
        /// replace i by i in t1 so no replacement ///
        ft_sed(argv, "tests/t1", "i", "i");
       
        /// replace z by a in t1, z doesn't exist in t1///
        ft_sed(argv, "/tests/t1", "z", "a");
        */
    }
    else
    {
        if (argc < 4 || argc > 4)
            std::cout << "Incorrect number of arguments, please try again" << std::endl;
    }
    return (0);
}