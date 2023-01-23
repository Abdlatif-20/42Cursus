#include "push_swap.h"

#include <stdio.h>
void red()
{
    printf("\033[1;31m");
}

void yellow()
{
    printf("\033[1;33m");
}

void reset()
{
    printf("\033[0m");
}

int main()
{
    // red();
    ft_putstr_fd("\033[1;31mHello ");
    // write(1, "Hello ", 6);
    yellow();
    printf("world\n");
    reset();
    return 0;
}
