//    1
//    2 3
//    4 5 6
//    7 8 9 10
#include<stdio.h>
#include<math.h>
int main() 
{
int  n,i,j,k;
printf("Enter n : ");
scanf("%i",&n);
    int temp=1;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
     {printf("%i ",temp++);}
printf("\n");
}



return 0;
}