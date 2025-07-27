//        *
//       ***
//      *****
//     *******
//      *****
//       ***
//        *
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, k;
    printf("Enter n : ");
    scanf("%i", &n);
    for (i = 1; i <= n / 2 + 1; i++)
    {
        for (j = i; j <= n / 2 + 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i * 2 - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = n / 2; i >= 1; i--)
    {
        for (j = i; j <= n / 2 + 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i * 2 - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}