
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int pos, del_len;

    // Input the original string
    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    int str_len = strlen(str);

    // Input position and number of characters to delete
    printf("Enter the position to delete from (0-based index): ");
    scanf("%d", &pos);
    printf("Enter the number of characters to delete: ");
    scanf("%d", &del_len);

    // Validate position and length
    if (pos < 0 || pos >= str_len || del_len < 0 || pos + del_len > str_len) {
        printf("Invalid position or delete length.\n");
        return 1;
    }

    // Shift characters to the left
    for (int i = pos + del_len; i <= str_len; i++) {
        str[i - del_len] = str[i];
    }

    // Print result
    printf("Resulting string: %s\n", str);

    return 0;
}

