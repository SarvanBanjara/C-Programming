// unique elemnt in array

#include <stdio.h>
int main()
{
    int n;
    printf("Sample Input : ");
    scanf("%i", &n);
    int arr[n];
    for (int i = 0; i < n; i++){scanf("%i", &arr[i]);}


    for (int j = 0; j < n; j++){
          int flag = 0;
         for (int k = 0; k < n; k++) {
            if(j==k)continue;
            if (arr[j] == arr[k]){
                flag = 1;
                break;     }
        }

        if (flag == 0) {printf(" %i ",arr[j]);     }
        
    }
    return 0;
}