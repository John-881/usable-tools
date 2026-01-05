#include <stdio.h>

int main()
{
    int a = 0, b;
    for (; a < 6; a++)
    {
        for (b = 0; b < 6; b++)
            printf("*");
        printf("\n");
    }

    return 0;
}