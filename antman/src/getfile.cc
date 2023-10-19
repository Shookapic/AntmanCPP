#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../includes/antman.h"

char *GetFile(char const *file)
{
    char *gathered_file = NULL;
    int fd = 0;
    int size = 0;

    fd = open(file, O_RDONLY);
    if (fd == -1) {
        std::cout << "Error: File not found" << std::endl;
        return NULL;
    }
    size = lseek(fd, 0, SEEK_END);
    lseek(fd, 0, SEEK_SET);
    gathered_file = new char[size + 1];
    read(fd, gathered_file, size);
    gathered_file[size] = '\0';
    close(fd);
    return gathered_file;
}
