#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%i",&a);
    if(a==0)
    {      printf("%i is postive but neither even nor odd.",a);      }
    else if(a>0)
    {    if(a%2==0){printf("%i is positive and even.",a);}
         else {printf("%i is positive and odd.",a);}            }
    else 
    {      if(a%2==0){printf("%i is negetive and even.",a);}
           else{printf("%i is negetive and odd.",a);}            }
    return 0;
       

}

