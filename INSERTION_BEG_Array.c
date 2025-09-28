#include <stdio.h>

int main() {
    int arr[100], n, i, element;

    // Number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert at the beginning: ");
    scanf("%d", &element);

    // Shift elements to the right
    for (i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element at the beginning
    arr[0] = element;
    n++; // Increase the size of the array

    //  Array after insertion
    printf("Array after insertion at the beginning:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);

