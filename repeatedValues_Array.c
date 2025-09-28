#include <stdio.h>

int main() {
    int arr[100], n, i, value, count = 0;

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

    // Delete all occurrences using linear search
    int j = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != value) {
            arr[j] = arr[i];  
            j++;
        } else {
            count++;
        }
    }

    if (count == 0) {
        printf("Element %d not found in the array.\n", value);
    } else {
        n = j;  
        printf("Element %d deleted %d time(s).\n", value, count);
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

