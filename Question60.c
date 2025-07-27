
#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str1[len2] != '\0')
    {
        len2++;
    }
    printf("%i %i", len1, len2);

    char str3[len1 + len2 - 1];
    int tracker = 0;

    for (int i = 0; i < len1 + len2 - 1; i += 2)
    {
        str3[i] = str1[tracker++];
    }

    tracker = 0;

    for (int i = 1; i < len1 + len2 - 1; i += 2)
    {
        str3[i] = str2[tracker++];
    }

    str3[len1 + len2 - 2] = '\0';

    printf("%s", str3);
    return 0;
}