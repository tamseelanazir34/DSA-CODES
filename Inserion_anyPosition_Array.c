#include <stdio.h>

int main() {
    int arr[100], n, i, element, position;

    //  Number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to insert and position
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &position);

    
    if (position < 1 || position > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[position - 1] = element;
    n++; // Increase the size

    //  Array after insertion
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

