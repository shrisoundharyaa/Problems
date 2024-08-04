#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    char out[100];
    
    // Reading input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Removing newline character
    
    int i, j;
    int length = strlen(str); // Calculate the length once before the loop
    
    for(i = 0, j = 0; i < length; i++) {
        if(str[i] != ' ') { // Compare with space character
            out[j++] = str[i]; // Copy non-space characters to output array
        }
    }
    out[j] = '\0'; // Null-terminate the output string
    
    printf("%s", out); // Print the modified string
    
    return 0;
}
