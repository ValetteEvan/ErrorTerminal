#pragma once 
#include <iostream>
#include <Windows.h>

constexpr const char* RED = "\033[31m";                 /* Rouge */
constexpr const char* YELLOW = "\033[33m";              /* Jaune */
constexpr const char* ORANGE = "\033[38;5;214m";        /* Orange */
constexpr const char* LIGHT_GREEN = "\033[38;5;82m";    /* Vert clair */ 
constexpr const char* RESET = "\033[0m";                /* Réinitialise */ 

template <class Temp>
void WARNING(Temp str, int level, bool color_line) 
{
    switch (level)
    {
    case 0:
        if (color_line)
        std::cerr << YELLOW << "WARNING INFO: " << RESET << str << std::endl;
        else
        std::cerr << YELLOW << "WARNING INFO: "  << str << RESET << std::endl; 
        break;
    case 1:
        if (color_line)
        std::cerr << ORANGE << "WARNING LEVEL 1: " << RESET << str << std::endl;
        else
        std::cerr << ORANGE << "WARNING LEVEL 1: "  << str << RESET<< std::endl; 
        break;
    case 2:
        if (color_line)
        std::cerr << ORANGE << "WARNING LEVEL 2: " << RESET << str << std::endl;
        else 
        std::cerr << ORANGE << "WARNING LEVEL 2: "  << str << RESET<< std::endl; 
        break;
    case 3:
        if(color_line)
        std::cerr << RED << "WARNING LEVEL 3: " << RESET << str << std::endl;
        else
        std::cerr << RED << "WARNING LEVEL 3: " << str << RESET << std::endl; 
        break;
    }
}

template<class Temp>
void ERROR_WARNING(Temp str, bool color_line)
{
    if (color_line)
    {
        std::cerr << RED << "//ERROR// "  << str << RESET << std::endl; 
    }
    else
    {
        std::cerr << RED << "//ERROR// " << RESET << str << std::endl;
    }
}

template<class Temp> 
void GOOD(Temp str,bool color_line)
{
    if (color_line)
    {
        std::cerr << LIGHT_GREEN << "=GOOD= : " << str << RESET << std::endl;
    }
    else
    {
        std::cerr << LIGHT_GREEN << "=GOOD= : "<< RESET << str  << std::endl; 
    }
}

