#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

// int main()
// {
//   printf("%f", sqrt(23));
// }

int main()
{
    int N;
    scanf("%d", &N);
    char line[257];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", line);
    }
    int i2 = 0;
    while (line[i2] && line[i2] != ' ')
    {
        printf("%c", line[i2]);
        i2 += 2;
    }
    i2 = strlen(line);
    while (i2 > 0 && line[i2] != ' ')
    {
        printf("%c", line[i2]);
        i2 -= 2;
    }

    return 0;
}