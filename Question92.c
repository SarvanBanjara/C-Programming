//  Write a program to print the multiplication table of numbers from 1 to 10.
#include<stdio.h>
int main()
{
    int n=10;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            printf("%ix%i=%i\t",j,i,j*i);
        }
        printf("\n");
    }
    return 0;
}
