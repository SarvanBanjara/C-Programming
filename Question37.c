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
    sum += rem*rem*rem;
    n=n/10;
  }  

   if(sum==copy){printf("%i is armstrong number",copy);}
   else{printf("%i is not a armstrong number",copy);}

return 0;
}