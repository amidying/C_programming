#include <stdio.h>

int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}