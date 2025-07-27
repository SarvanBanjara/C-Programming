//  Write a program to convert a decimal number to binary.
#include<stdio.h>
#include<math.h>
int main() 
{
int  n,base=1,binary=0;
printf("Enter decimal no. :- ");
scanf("%i",&n);
while(n>0){
       int rem =n%2;
        binary=binary + rem*base;
        base=base*10;
        n=n/2;
}
printf("The binary is %i",binary);




return 0;
}

