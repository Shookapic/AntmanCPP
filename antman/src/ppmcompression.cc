#include "../includes/antman.h"

void PPMCompressionAlgorithm(char const *file)
{
    (void)file;
    return;
}

void PPMCompression(char const *file)
{

    char *gathered_file = NULL;
    gathered_file = GetFile(file);
    PPMCompressionAlgorithm(gathered_file);
    return;
}

