//        1
//       212
//      32123
//     4321234
//    543212345
#include<stdio.h>
#include<math.h>
int main() 
{
int  n,i,j,k,l;
printf("Enter n : ");
scanf("%i",&n);
for(i=1;i<=n;i++){

    for(j=i;j<=n;j++)
    { printf(" ");}

    for(k=i;k>=1;k--)
    {printf("%i",k);}

    for(l=2;l<=i;l++)
    {printf("%i",l);}

    printf("\n");
}
return 0;
}