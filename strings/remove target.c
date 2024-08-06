#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character
    
    char charac;
    printf("Enter the character to remove: ");
    scanf(" %c", &charac); // Note the space before %c to consume any leftover newline
    
    int len = strlen(str);

    // Find and remove the first occurrence of the character
    for (int i = 0; i < len; i++) {
        if (str[i] == charac) {
            for (int j = i; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = '\0'; // Null-terminate the string
            break; // Exit the loop after removing the first occurrence
        }
    }
    
    printf("String after removal: %s\n", str);
    
    return 0;
}
