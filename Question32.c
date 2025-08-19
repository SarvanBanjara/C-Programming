//Write a  program to check whether a number is a palindrome or not
#include<stdio.h>
int main()
{
    int n,rem=0,rev=0;
    printf("Enter no. : ");
    scanf("%i",&n);
    int copy=n;
    
    while(n>0)
    {
        rem=n%10;
        rev= (rev*10)+rem;
        n=n/10;
    }
    if(rev==copy)
    {printf("On reversing %i we get %i . Thus %i is palindrome. ",copy,rev,copy);}
    else{printf("On reversing %i we get %i . Thus %i is not palindrome.",copy,rev,copy);
    }
    
    return 0;
}