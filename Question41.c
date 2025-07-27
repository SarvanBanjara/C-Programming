/*Accept size n from user and create a n size array then take n inputs into the and finally
Print the sum of all elements .  
Sample Input → n (size of array) : 5      
Sample Input → Elements of array  :  1 2 3 4 5
[ Explanation : Sum of all Array Elements ⇒ 1 + 2 + 3 + 4 + 5 = 15 ]                                              
Sample Output → Sum of all Array Elements  = 15 
*/
#include<stdio.h>
#include<math.h>
int main() 
{
int  n ;
printf("Enter size of array : ");
scanf("%i",&n);
int arr[n],sum=0;

printf("Enter elements for array :- \n");
for(int i=0;i<n;i++)
{ scanf("%i",&arr[i]);
sum=sum+arr[i];}


for(int j=0;j<n-1;j++)
{
    printf("%i + ",arr[j]);
}
 printf("%i = %i",arr[n-1],sum);





return 0;
}