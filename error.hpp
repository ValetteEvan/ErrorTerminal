#pragma once 
#include <iostream>

#define RED     "\033[31m"      /* Rouge */
#define YELLOW  "\033[33m"      /* Jaune */
#define ORANGE  "\033[38;5;214m" /* Orange clair via code 256 couleurs */
#define RESET   "\033[0m"       /* Réinitialiser la couleur */

template <class Temp>
void WARNING(Temp str,int level)
{
    switch(level)
    {
        case 0:
            std::cout << YELLOW <<"WARNING INFO: " << RESET << str << std::endl;
        break; 
        case 1:
            std::cout << ORANGE <<"WARNING LEVEL 1: " << RESET << str << std::endl;
        break; 
        case 2:
            std::cout << ORANGE <<"WARNING LEVEL 2: " << RESET << str << std::endl;
        break; 
        case 3:
            std::cout << RED <<"WARNING LEVEL 3: " << RESET << str << std::endl;
        break; 
    }
}

template<class Temp>
void ERROR(Temp str)
{
    std::cout << RED <<"//ERROR// " << RESET << str << std::endl;
}



