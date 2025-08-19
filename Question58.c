//Write a program to remove the spaces from a string
#include <stdio.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0')
    {

        if (str[i] == ' ')
        {
            int j = i;
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
            i--;
        }

        i++;
    }

    printf("%s", str);
    return 0;
}