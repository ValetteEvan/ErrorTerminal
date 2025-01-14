#pragma once
#include <iostream>
#include <Windows.h> 
#include <filesystem> 

constexpr const char* RED = "\033[31m";                 /* Rouge */
constexpr const char* YELLOW = "\033[33m";              /* Jaune */
constexpr const char* ORANGE = "\033[38;5;214m";        /* Orange */
constexpr const char* RESET = "\033[0m";                /* Réinitialise */

template <class Temp>
void WARNING(Temp str, int level, bool color_line, const std::string& filePath, int line)
{
    std::string fileName = std::filesystem::path(filePath).filename().string();

    switch (level)
    {
    case 0:
        std::cerr << YELLOW << "WARNING INFO: " << RESET << str
            << " (File: " << fileName << ", Line: " << line << ")" << std::endl;
        break;
    case 1:
        std::cerr << ORANGE << "WARNING LEVEL 1: " << RESET << str
            << " (File: " << fileName << ", Line: " << line << ")" << std::endl;
        break;
    case 3:
        std::cerr << RED << "WARNING LEVEL 3: " << RESET << str
            << " (File: " << fileName << ", Line: " << line << ")" << std::endl;
        break;
    }
}

#define WARNING_CALL(message, level, color) \
    WARNING(message, level, color, __FILE__, __LINE__)


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

