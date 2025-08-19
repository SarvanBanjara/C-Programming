//Write a program to count the total number of alphabets, digits, and special characters in a string... 
#include <stdio.h>
int main()
{
    char str[200];

    fgets(str, sizeof(str), stdin);
    fflush(stdin);

    int l = 0;
    int alphabet = 0, special = 0, numeric = 0;
    while (str[l] != '\0')
    {
        if (str[l] >= 65 && str[l] <= 90 || str[l] >= 97 && str[l <= 122])
        {
            alphabet++;
        }

        else if (str[l] >= 48 && str[l] <= 57)
        {
            numeric++;
        }
        else if (str[l] == 32 || str[l] == 10)
        {
        }
        else
        {
            special++;
        }

        l++;
    }
    printf("Alphabets = %i  ,  Numeric = %i  ,  Special Character = %i ,%s.", alphabet, numeric, special, str);

    return 0;
}