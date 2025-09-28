#include <stdio.h>

int main() {
    int arr[100], n, i;

    // Input: Size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input: Elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output: Traversal of the array
    printf("Traversing the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}

