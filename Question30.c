//Write a program to sum of digits of a number
#include<stdio.h>
#include<math.h>
int main() {

int n;
printf("Enter n : ");
scanf("%i",&n);
int sum=0;
while(n>0)
{
    int rem=n%10;
    sum+=rem;
    if(n>=10){printf("%i + ",rem);}
    else{printf("%i = ",rem);}
    n/=10;
}
printf("%i",sum);
return 0;
}   