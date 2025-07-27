#include<stdio.h>
#include<math.h>
int main() 
{
  int  n;
   
   printf("Enter n : ");
   scanf("%i",&n);
   int rem=0,sum=0,copy=n;

   while(n>0){
    rem=n%10;
    sum=sum+rem;
    n=n/10;
   }
    if(copy%sum==0){printf("%i is a harshad number.",copy);}
    else{printf("%i is not a harshad number.",copy);}
  
return 0;
}