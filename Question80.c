// 1
// 21
// 321
// 4321
// 54321

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    for(int i=1;i<=n;i++){
            int temp=i;
        for(int j=1;j<=i;j++){
            printf("%i",temp--);
        }
        printf("\n");
    }
    return 0;
}
