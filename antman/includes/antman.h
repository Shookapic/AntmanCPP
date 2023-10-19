#pragma once

#include <iostream>
#include <unistd.h>

char *GetFile(char const*file);
void HTMLCompression(char const *file);
void LyricsCompression(char const *file);
void PPMCompression(char const *file);
