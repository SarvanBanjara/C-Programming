// 54321
//  5432
//   543
//    54
//     5
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
         int temp=n;
        for(int j=1;j<=i;j++){printf(" ");}
        for(int k=n;k>=i;k--){printf("%i",temp--);}
    printf("\n");
    }
    return 0;
}
