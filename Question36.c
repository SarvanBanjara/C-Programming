#include<stdio.h>
#include<math.h>
int main() 
{
  int  n;
  printf("Enter n : ");
  scanf("%i",&n);
  int sum=0;
   for(int i=1;i<=n/2;i++)
   {
    if(n%i==0){sum += i;}

   }
     if(sum==n){printf("%i is a perfect number.",n);}
     else{printf("%i is not a perfect number.",n);}


return 0;
}
