//Build a Calculator which perform these operations (+ , - , / , x , %) [MINI PROJECT]

#include <stdio.h>
int main()
{
    int n1, n2;
    char sign;
    printf("Enter the operator ( + , - , * , / , %c )  : ", 37);
    scanf("%c", &sign);
    printf("No 1 : ");
    scanf("%i", &n1);
    printf("No 2 : ");
    scanf("%i", &n2);
    fflush(stdin);
    if (sign == '+')
    {
        printf("%i + %i = %i", n1, n2, n1 + n2);
    }
    else if (sign == '-')
    {
        printf("%i - %i = %i", n1, n2, n1 - n2);
    }
    else if (sign == '*')
    {
        printf("%i * %i = %i", n1, n2, n1 * n2);
    }
    else if (sign == '%')
    {
        printf("%i %c %i = %i", n1, '%', n2, n1 % n2);
    }
    else if (sign == '/')
    {
        if (n2 != 0)
        {
            printf("%i / %i = %i", n1, n2, n1 / n2);
        }
        else
        {
            printf("Cannot divisible by 0");
        }
    }
    else
    {
        printf("Enter the valid operator.\n");
    }

    return 0;
}