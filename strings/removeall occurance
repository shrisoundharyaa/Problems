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
    int j = 0; // Index for the new string
    
    // Iterate through the original string
    for (int i = 0; i < len; i++) {
        // If the current character is not the one to be removed, copy it to the new position
        if (str[i] != charac) {
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0'; // Null-terminate the modified string
    
    printf("String after removal: %s\n", str);
    
    return 0;
}
