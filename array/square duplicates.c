#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int freq[100];
    int arr[100];

    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    // Counting frequencies of each element
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // Mark duplicate elements with 0
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;  // Set the frequency of the element
        }
    }

    // Printing the occurrences of each unique element
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    // Modifying the array: squaring duplicate elements
    for (int i = 0; i < n; i++) {
        if (freq[i] != 1) {  // Square duplicate elements
            printf("%d ", arr[i] * arr[i]);
        } else {  // Leave unique elements as they are
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}
