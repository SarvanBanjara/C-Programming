// 1
// 23
// 456
// 78910
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    int temp=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           printf("%i",temp++);
        }
        printf("\n");
    }
    return 0;
}