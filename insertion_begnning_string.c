#include <stdio.h>
#include <string.h>

int main() {
    char str[100], insert[100], result[200];

    // Input the original string
    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    // Input the string to insert at the beginning
    printf("Enter the string to insert at the beginning: ");
    fgets(insert, sizeof(insert), stdin);
    insert[strcspn(insert, "\n")] = 0;

    // Combine the strings
    strcpy(result, insert);  
    strcat(result, str);     

    // Print result
    printf("Resulting string: %s\n", result);

    return 0;
}

