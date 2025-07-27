// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <stdio.h>

int main() {
    int n;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to iterate through rows
    for (int i = 1; i <= n; i++) {
        int num = i % 2;  // Start with 1 or 0 based on the row number

        // Loop to iterate through columns
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num;  // Toggle between 0 and 1
        }

        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
