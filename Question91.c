// To calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b,hcf;
    printf("Enter two no. :- ");
    scanf("%i %i",&a ,&b);
    if(a==b){hcf=a;}
    else if(a<b){for(int i=1;i<=a;i++){
         if(a%i==0 && b%i==0){hcf=i;} }}
    else{for(int i=1;i<=b;i++){
        if(a%i==0 &&b%i==0){hcf=i;}
                                      }  }   
     printf("The HCF of %i and %i is %i",a,b,hcf);   
     return 0;
        }
