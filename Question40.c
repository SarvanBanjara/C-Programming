/*Write a program  to print positive and negative elements of an array separately .  
Sample Input → n (size of array) : 5      
Sample Input → Elements of array  :  1 -23 56 -69 36
Sample Output → Positive Elements : 1 56 36
Sample Output → Negative Elements : -23 -69
*/
#include<stdio.h>
#include<math.h>
int main() 
{
int  n ;
printf("Enter size of array :- ");
scanf("%i",&n);

int arr[n];
printf("Enter elements for array :- ");
for(int i=0;i<n;i++)
{ scanf("%i",&arr[i]);}

int len =sizeof(arr)/sizeof(int);
for(int i=0;i<len;i++){
    if(arr[i]>0){printf("%i ",arr[i]);}
}

printf("\n");
for(int i=0;i<len;i++){
    if(arr[i]<0){printf("%i ",arr[i]);}
}
return 0;
}

