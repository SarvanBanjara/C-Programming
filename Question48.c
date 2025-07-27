// right rotation by k elements
// 1 2 3 4 5 6 7 8 9
// 7 8 9 1 2 3 4 5 6

#include <stdio.h>
int main()
{
   int n;
   printf("Enter n : ");
   scanf("%i", &n);
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%i", &arr[i]);
   }

   int rotate[n];
   int tracker = 0, k;
   printf("Enter k : ");
   scanf("%i", &k);

   for (int i = n - k; i < n; i++)
   {
      rotate[tracker++] = arr[i];
   }
   for (int i = 0; i <= k; i++)
   {
      rotate[tracker++] = arr[i];
   }

   for (int i = 0; i < n; i++)
   {
      printf("%i ", rotate[i]);
   }
   return 0;
}