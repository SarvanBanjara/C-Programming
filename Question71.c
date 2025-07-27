//   *
//   * *
//   *   *
//   *     *
//   * * * * *

#include <stdio.h>
#include <math.h>
int main()
{
  int n, i, j, k;
  printf("Enter n : ");
  scanf("%i", &n);
  for (i = 1; i <= n; i++)
  {

    for (j = 1; j <= i; j++)
    {
      if (i == n || j == 1 || j == i)
      {
        printf("* ");
      }

      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}