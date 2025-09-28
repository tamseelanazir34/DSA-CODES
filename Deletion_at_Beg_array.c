#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Deletion at beginning
    if (n == 0) {
        printf("Array is already empty.\n");
    } else {
        for (i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];  
			// Shift left
        }
        n--;  
        printf("Element at the beginning deleted.\n");
    }

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

