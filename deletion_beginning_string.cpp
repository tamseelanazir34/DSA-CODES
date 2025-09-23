#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int n;

    // Input the original string
    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    // Input number of characters to delete from the beginning
    printf("Enter number of characters to delete from the beginning: ");
    scanf("%d", &n);

    int len = strlen(str);

    // Validate input
    if (n < 0 || n > len) {
        printf("Invalid number of characters to delete.\n");
        return 1;
    }

    // Shift characters left by n positions
    for (int i = n; i <= len; i++) {
        str[i - n] = str[i];
    }

    // Print result
    printf("Resulting string: %s\n", str);

    return 0;
}
``

