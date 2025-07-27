// Write a program to find maximum occurring character( exclude space ) in a string and print how many time it appeared .
// Sample Input → String  : “Haan Bhoola Main Jahan Main Masti Mein Ghoomun Main Karta Dua Ke Hasti Rahe Tu”
// Sample Output → a is the maximum occurring character which comes 14 times

#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    fflush(stdin);
    fgets(str, sizeof(str), stdin);

    int arr[130];
    for (int j = 0; j < 130; j++)
    {
        arr[j] = 0;
    }

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != 10 && str[i] != 32)
        {
            arr[str[i]]++;
        }
        else
        {
        }

        i++;
    }
    int l = 0;
    for (int j = 0; j < 130; j++)
    {
        if (arr[j] > arr[l])
        {
            l = j;
        }
    }

    printf("%c occurs maximum and %i times", l, arr[l]);

    for (int i = 0; i < 130; i++)
    {
        printf("%i ", arr[i]);
    }

    return 0;
}