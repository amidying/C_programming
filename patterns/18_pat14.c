#include <stdio.h>

int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d", i + j - 1);
        }
        printf("\n");
    }
    return 0;
}