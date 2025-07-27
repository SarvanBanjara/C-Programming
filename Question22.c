

#include<stdio.h>
int main()
{    
    int n1,n2;
    char sign;
   while(1){ 
    printf("Enter the operator(+,-,*,/) or press q to quit :");
    fflush(stdin);
    scanf("%c",&sign);
    
    
    if(sign=='q'||sign=='Q'){printf("Exiting Calcutor.");
           break;}
             
else
    {  printf("Enter the two no :");
    scanf("%i %i",&n1,&n2);

        switch (sign)
    {
    case '+':printf("%i + %i = %i\n",n1,n2,n1+n2);
        break;
    case '-':printf("%i - %i = %i\n",n1,n2,n1-n2);
        break;
    case '*':printf("%i * %i = %i\n",n1,n2,n1*n2);
        break; 
    case '/':if(n2!=0){printf("%i / %i = %.1f\n",n1,n2,(float)n1/n2);}
               else{printf("Cannot divisible by 0.");}
             continue;


    default:printf("Invalid Operator");
        continue;
    }
    }
   }
    return 0;
    
}