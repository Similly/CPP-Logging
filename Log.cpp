#include "Log.h"

#include <iostream>
void Log(std::string text, int level) {

    std::string lvl;
    std::string color;

    switch (level)
    {
    case 1:
        lvl = "INFO";
        color = "\033[30m";
        break;
    
    case 2:
        lvl = "WARNING";
        color = "\033[33m";
        break;

    case 3:
        lvl = "ERROR";
        color = "\033[31m";
        break;

    case 4:
        lvl = "SUCCESS";
        color = "\033[32m";
        break;
    
    default:
        lvl = "undefined";
        break;
    }

    std::cout << color << lvl << ":\n" << text << "\033[30m" << std::endl;
}