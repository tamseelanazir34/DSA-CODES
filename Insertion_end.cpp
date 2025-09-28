#include <stdio.h>

int main() {
    int arr[100], n, i, element;

    // Input: Number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: New element to insert at the end
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    // Insertion at the end
    arr[n] = element;
    n++; 

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

