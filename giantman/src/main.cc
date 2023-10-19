#include <unistd.h>

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    write(1, "Let's do this !\n", 16);
    return 0;
}
