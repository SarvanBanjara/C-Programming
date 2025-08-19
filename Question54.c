//Write a program to compare two strings if they are identical print (identical) else (not identical)
#include <stdio.h>
#include <string.h>
int main()
{

    char str1[100], str2[100];
    printf("String 1 : ");
    fgets(str1, sizeof(str1), stdin);
    printf("String 2 : ");
    fgets(str2, sizeof(str2), stdin);

    int i = 0, flag = -1;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == -1)
    {
        printf("Identical");
    }
    else
    {
        printf("Not Identical");
    }
    return 0;
}