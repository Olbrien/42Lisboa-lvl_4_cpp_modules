#include <iostream>
#include "Karen.hpp"

enum e_level {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

int main(int argc, char **argv) {
    if (argc != 2) {
        return (0);
    }
    
    Karen julia;

    std::string level = argv[1];
    int i = -1;

    (!level.compare("DEBUG")) && (i = DEBUG);
    (!level.compare("INFO")) && (i = INFO);
    (!level.compare("WARNING")) && (i = WARNING);
    (!level.compare("ERROR")) && (i = ERROR);

    switch (i)
    {
    case 0:
        julia.complain("DEBUG");
        julia.complain("INFO");
        julia.complain("WARNING");
        julia.complain("ERROR");
        break;
    case 1:
        julia.complain("INFO");
        julia.complain("WARNING");
        julia.complain("ERROR");
        break;
    case 2:
        julia.complain("WARNING");
        julia.complain("ERROR");
        break;
    case 3:
        julia.complain("ERROR");
        break;    
    default:
        julia.complain("");
        break;
    }
}