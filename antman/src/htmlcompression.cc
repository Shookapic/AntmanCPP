#include "../includes/antman.h"

void HTMLCompressionAlgorithm(char const *file)
{
    (void)file;
    return;
}

void HTMLCompression(char const *file)
{
    char *gathered_file = NULL;
    gathered_file = GetFile(file);
    HTMLCompressionAlgorithm(gathered_file);
    return;
}