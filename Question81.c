//  Write a program to print the multiplication table of numbers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    for(int i=1;i<=10;i++){

        printf("\n%i x %i = %i",n,i,n*i);
    }
    return 0;
}
