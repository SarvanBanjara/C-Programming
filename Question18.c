//Write a program to check whether an alphabet is a vowel or a consonant.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter the alphabet : ");
    scanf("%c",&a);

    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        {printf("%c is a vowel.",a);}
        else{printf("%c is a consonant",a);}
        return 0;
}