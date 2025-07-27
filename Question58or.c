#include <stdio.h>
int main()
{
    char str[200];
    fgets(str, sizeof(str), stdin);
    int space = 0, i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            space++;
        }
        i++;
    }

    for (int j = 0; j < i - 1; j++)
    {
        if (str[j] == ' ')
        {
            for (int k = j; k < i - 2; k++)
            {
                str[k] = str[k + 1];
                j--;
            }
        }
    }

    for (int j = 0; j < i - 1 - space; j++)
    {
        printf("%c", str[j]);
    }
    return 0;
}