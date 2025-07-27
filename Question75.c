//        A
//       B C
//      D E F
//     G H I J
//    K L M N O
#include<stdio.h>
#include<math.h>
int main() 
{
int  n,i,j,k;
printf("Enter n : ");
scanf("%i",&n);
int temp=65;
for(i=1;i<=n;i++){
    for(k=i;k<=n;k++){
        printf(" ");
    }
    for(j=1;j<=i;j++)
{
    printf("%c ",temp++);
}
printf("\n");
}



return 0;
}