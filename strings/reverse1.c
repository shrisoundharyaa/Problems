#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to reverse a string in place
void reverse_string(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    // Read input string from standard input
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove the newline character at the end
    
    char *token = strtok(str, " ");  // Tokenize the string using space as delimiter
    char result[100] = "";  // Initialize an empty result string
    
    while (token != NULL) {
        char word[100];
        strcpy(word, token);  // Copy the token into word
        reverse_string(word, word + strlen(word) - 1);  // Reverse the word
        
        strcat(result, word);  // Append the reversed word to result
        strcat(result, " ");  // Add a space after the word
        
        token = strtok(NULL, " ");  // Get the next token
    }
    
    // Remove the trailing space
    if (strlen(result) > 0) {
        result[strlen(result) - 1] = '\0';
    }
    
    // Print the modified string with each word reversed
    printf("%s", result);
    
    return 0;
}
