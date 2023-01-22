#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int A;
    scanf("%d", &A);
    int B;
    scanf("%d", &B);
    int C;
    scanf("%d", &C);
    int sum = A + B;
    if (sum <= C)
        printf("");
    else
        printf("%d\n", A + B + C);
    // return 0;
}