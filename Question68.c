//        *
//       **
//      ***
//     ****
//    *****
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, k;
    printf("Enter n : ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}