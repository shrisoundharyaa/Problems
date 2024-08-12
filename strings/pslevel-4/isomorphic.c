#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areIsomorphic(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // If lengths of both strings are not the same, they cannot be isomorphic
    if (len1 != len2)
        return false;
        

    // Create two frequency arrays initialized to -1
    int freq1[256], freq2[256];
    for (int i = 0; i < 256; i++) {
        freq1[i] = -1;
        freq2[i] = -1;
    }

    for (int i = 0; i < len1; i++) {
        char c1 = str1[i];
        char c2 = str2[i];

        // If current characters of both strings have not been seen before
        if (freq1[(int)c1] == -1 && freq2[(int)c2] == -1) {
            // Mark the characters as seen by storing their positions
            freq1[(int)c1] = c2;
            freq2[(int)c2] = c1;
        }
        // If this is not the first occurrence of current characters
        // in both strings, then check if previous occurrences are mapped to same characters
        else if (freq1[(int)c1] != c2 || freq2[(int)c2] != c1) {
            return false;
        }
    }
    return true;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

    if (areIsomorphic(str1, str2)) {
        printf("The strings are isomorphic.\n");
    } else {
        printf("The strings are not isomorphic.\n");
    }

    return 0;
}
