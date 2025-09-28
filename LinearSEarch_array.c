#include <stdio.h>

int main() {
    int arr[100], n, i, value, pos = -1;

    // Array size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Value to delete
    printf("Enter the value to delete: ");
    scanf("%d", &value);

    // Linear search to find the position
    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            pos = i; 
			 // First occurrence found
            break;
        }
    }

    if (pos == -1) {
        printf("Element %d not found in the array.\n", value);
    } else {
        // Shift elements left to delete the value
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;  

        printf("Element %d deleted successfully.\n", value);
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

