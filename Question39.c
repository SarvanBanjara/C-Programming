/*Write a program  to accept n elements  in an array and print it in normal order and in reverse order
Sample Input → n (size of array) : 5      
Sample Input → Elements of array  :  1 2 3 4 5
Sample Output → Normal Order : 1 2 3 4 5
Sample Output → Reverse Order : 5 4 3 2 1
*/
#include<stdio.h>
#include<math.h>
int main() 
{
   int  n ;
   printf("Enter siz of array :- ");
   scanf("%i",&n);
   
   int arr[n];
   printf("Enter elements for array :- \n");
   for(int i=0;i<n;i++){ scanf("%i",&arr[i]);}
   
   printf("\nNormal order : ");
   for(int j=0;j<n;j++){printf("%i ",arr[j]);}
   
   printf("\nReverse order : ");
   for(int j=n-1;j>=0;j--){  printf("%i ",arr[j]);}

   return 0;
}