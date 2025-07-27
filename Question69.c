//       *
//      ***
//     *****
//    *******
//   *********

#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, k;
    printf("Enter n : ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {

        for (k = i; k <= n; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}