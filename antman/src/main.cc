#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "../includes/antman.h"
using namespace std;

int CheckArgs(int ac, char **av)
{
    if (ac != 3) {
        std::cout << "Error: Bad number of arguments" << std::endl;
        return 84;
    }
    if (av[1] == NULL) {
        std::cout << "Error: No Arguments" << std::endl;
        return 84;
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        std::cout << "USAGE" << std::endl;
        std::cout << "\t./antman file [file2] [...]" << std::endl;
        std::cout << "DESCRIPTION" << std::endl;
        std::cout << "\tfile\tfile which will be compressed" << std::endl;
        return 0;
    }
    return 0;
}

int main(int ac, char **av)
{
   if (CheckArgs(ac, av) == 84)
       return 84;
    if (atoi(av[2]) == 1) {
        LyricsCompression(av[1]);
    }
    if (atoi(av[2]) == 2) {
        HTMLCompression(av[1]);
    }
    if (atoi(av[2]) == 3) {
        PPMCompression(av[1]);
    }
}
