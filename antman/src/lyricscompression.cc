#include "../includes/antman.h"

void LyricsCompressionAlgorithm(char const *file)
{
    (void)file;
    return;
}

void LyricsCompression(char const *file)
{
    char *gathered_file = NULL;
    gathered_file = GetFile(file);
    LyricsCompressionAlgorithm(gathered_file);
    return;
}
