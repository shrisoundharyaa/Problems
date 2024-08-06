#include <stdio.h>
#include <string.h>

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
    
    int max = 0;
    char result;
    int max_count = 0;
    
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = (char)i;
            max_count = 1;
        } else if (freq[i] == max) {
            max_count++;
        }
    }
    
    if (max_count > 1) {
        printf("All characters have the same maximum frequency.\n");
    } else {
        printf("%d\n", max);
        printf("%c\n", result);
    }
    
    return 0;
}
