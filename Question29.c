//Write a program to find the prime numbers within a range of numbers
#include<stdio.h>
int main()
{       
  int start ,end;
  printf("Start : ");
  scanf("%i",&start);
  printf("End : ");
  scanf("%i",&end);

    for(int j=start;j<=end;j++) 

   { 

    int flag=-1;
    for(int i=2;i<=j/2;i++)
    {   if(j%i==0)  
        {flag=1;   
         break;}
       
    }
       if(flag==-1)
         {printf("%i  ",j);}  

             
   }

    return 0;

}