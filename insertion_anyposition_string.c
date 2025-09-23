#include <stdio.h>
#include <string.h>

int main() {
    char str[200], insert[100], result[300];
    int pos;

    // Input the original string
    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    // Input the string to insert
    printf("Enter the string to insert: ");
    fgets(insert, sizeof(insert), stdin);
    insert[strcspn(insert, "\n")] = 0; 

    // Input position to insert at
    printf("Enter the position to insert at (0-based index): ");
    scanf("%d", &pos);

    // Check if position is valid
    if (pos < 0 || pos > strlen(str)) {
        printf("Invalid position!\n");
        return 1;
    }

    // Insert string
    strncpy(result, str, pos);    
    result[pos] = '\0';              
    strcat(result, insert);        
    strcat(result, str + pos);       

    // Print result
    printf("Resulting string: %s\n", result);

    return 0;
}

