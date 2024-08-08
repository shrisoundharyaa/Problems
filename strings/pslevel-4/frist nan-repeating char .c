#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove trailing newline character

    int freq[256] = {0};  // Array to store frequency of each character
    int len = strlen(str);

    // Count the frequency of each character in the string
    for (int i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find and print the first non-repeating character
    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("%c\n", str[i]);
            break;  // Exit the loop after finding the first non-repeating character
        }
    }

    return 0;
}
