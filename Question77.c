//   1
//   22
//   333
//   4444
//   55555

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%i ", i);
        }
        printf("\n");
    }
    return 0;
}