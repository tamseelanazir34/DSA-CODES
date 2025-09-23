#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int pos, len;

    // Input the original string
    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    // Input position and length to delete
    printf("Enter the position to delete from (0-based index): ");
    scanf("%d", &pos);

    printf("Enter the number of characters to delete: ");
    scanf("%d", &len);

    int str_len = strlen(str);

    // Validate position and length
    if (pos < 0 || pos >= str_len || len < 0 || pos + len > str_len) {
        printf("Invalid position or length!\n");
        return 1;
    }

    // Shift the remaining characters to the left
    for (int i = pos + len; i <= str_len; i++) {
        str[i - len] = str[i];
    }

    // Print the resulting string
    printf("Resulting string: %s\n", str);

    return 0;
}

