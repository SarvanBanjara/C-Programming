#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    for (int j = 0; j < i - 1; j++)
    {

        printf("%c ", str[j]);
    }

    return 0;
}
