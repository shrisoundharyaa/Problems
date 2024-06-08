#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[100];
    
    // Read the array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Formatted output: ");
    
    // Traverse the array and identify consecutive sequences
    for (int i = 0; i < n; i++) {
        int start = arr[i];
        
        // Move to the end of the current sequence of consecutive numbers
        while (i < n - 1 && arr[i + 1] == arr[i] + 1) {
            i++;
        }
        
        int end = arr[i];
        
        // Print the range or single number
        if (start == end) {
            printf("%d", start);
        } else {
            printf("%d->%d", start, end);
        }
        
        // Print a comma unless it's the last element
        if (i < n - 1) {
            printf(",");
        }
    }
    
    printf("\n");
    
    return 0;
}
