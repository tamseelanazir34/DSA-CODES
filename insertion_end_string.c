#include <stdio.h>
#include <string.h>

int main() {
    char str[100], insert[100], result[200];

    // Input the original string
    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    // Input the string to insert at the end
    printf("Enter the string to insert at the end: ");
    fgets(insert, sizeof(insert), stdin);
    insert[strcspn(insert, "\n")] = 0; 

    // Combine the strings
    strcpy(result, str);      
    strcat(result, insert);   

    // Print result
    printf("Resulting string: %s\n", result);

    return 0;
}

