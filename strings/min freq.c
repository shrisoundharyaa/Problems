#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[100];
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    int freq[256] = {0};
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            freq[(int)str[i]]++;
        }
    }
    
    int min = INT_MAX;
    char result;
    int min_count = 0;
    
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            if (freq[i] < min) {
                min = freq[i];
                result = (char)i;
                min_count = 1;
            } else if (freq[i] == min) {
                min_count++;
            }
        }
    }
    
    if (min_count > 1) {
        printf("All characters have the same minimum frequency.\n");
    } else {
        printf("%d\n", min);
        printf("%c\n", result);
    }
    
    return 0;
}
