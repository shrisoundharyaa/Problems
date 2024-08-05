#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main() {
    char str[MAX_SIZE];
    char *words[MAX_SIZE]; // Array to store pointers to words
    char reverse[MAX_SIZE];
    int word_count = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    // Tokenize the string
    char *token = strtok(str, " ");
    while (token != NULL) {
        words[word_count++] = token; // Store the pointer to the word
        token = strtok(NULL, " ");
    }

    // Build the reversed string
    reverse[0] = '\0'; // Initialize the reverse string
    for (int i = word_count - 1; i >= 0; i--) {
        strcat(reverse, words[i]);
        if (i > 0) {
            strcat(reverse, " "); // Add space between words
        }
    }

    printf("Original string:\n%s\n\n", str);
    printf("Reversed ordered words:\n%s", reverse);

    return 0;
}
