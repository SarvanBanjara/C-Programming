//Write a program to check whether string is palindromic or not
#include <stdio.h>
int main()
{
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    int l = 0, r = i - 2, flag = 1;
    for (int j = 0; j < (i - 1) / 2; j++)
    {
        if (str[l++] != str[r--])
        {
            flag = -1;
        }
    }
    if (flag == 1)
    {
        printf("Palindromic");
    }
    else
    {
        printf("Not Palindromic");
    }
    return 0;
}