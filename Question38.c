//Write a  program to check whether a number is a Strong Number or not.. 
#include<stdio.h>
#include<math.h>
int main() 
{
  int  n,fact;
  printf("Enter n : ");
  scanf("%i",&n);
  int sum=0,copy=n,rem=0;
  while(n>0){
    rem=n%10;
     fact=1;
    for(int j=1;j<=rem;j++){
        
        fact *= j;
    }
     sum += fact;
     n=n/10;
  }
  if(sum==copy){printf("%i is a strong number",copy);}
  else{printf("%i is not a strong number.",copy);}


 



return 0;
}