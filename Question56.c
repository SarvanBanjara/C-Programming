// Write a program to input two string and add these strings in alternate order like
// Sample Input →String  : “Hello Shery”

// Sample Output → String is “Hello Shery” and its length is 11
#include <stdio.h>
#include <string.h>
int main()
{

    char str1[100], str2[100];
    printf("String 1 : ");
    fflush(stdin);
    fgets(str1, sizeof(str1), stdin);
    printf("String 2 : ");
    fflush(stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }

    char str3[len1 + len2];
    int tracker = 0;
    for (int i = 0; i < len1 - 1; i++)
    {
        str3[tracker++] = str1[i];
    }
    str3[tracker++] = ' ';
    for (int i = 0; i < len2 - 1; i++)
    {
        str3[tracker++] = str2[i];
    }
    str3[tracker++] = '\0';
    printf("%s", str3);
    return 0;
}