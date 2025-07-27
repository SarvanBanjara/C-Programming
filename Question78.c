// 1
// 12
// 123
// 1234
// 12345
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    for(int i=1;i<=n;i++){
    int t=1;
        for(int j=1;j<=i;j++){
            printf("%i",t++);
        }
        printf("\n");
    }
    return 0;
}