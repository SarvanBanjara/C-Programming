//binary search 
#include <stdio.h>

int main() {
    int size, key;

    // Input the size of the sorted array
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    //  input sorted array elements
    int arr[size];
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < size; i++) {scanf("%d", &arr[i]);}

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Binary search
    int left = 0, right = size - 1, mid = (left + right  ) / 2;


    while (left <= right) {  if (arr[mid] == key) {break;}
                             else if (arr[mid] < key) {
                                      left = mid + 1;
                                       mid=(left+right)/2; }
                             else { right = mid - 1;
                                           mid=right/2;   }
                                                                   }
    // Display the result
    if (arr[mid]==key) {
        printf("Element found at index: %d\n",mid);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
