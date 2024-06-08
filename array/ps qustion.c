#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[100];
    
    // Read the array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;

    // Sum the first, second, last, and second last elements if they exist
    if (n >= 1) {
        sum += arr[0];  // First element
    }
    if (n >= 2) {
        sum += arr[1];  // Second element
    }
    if (n >= 2) {
        sum += arr[n-1];  // Last element
    }
    if (n >= 4) {
        sum += arr[n-2];  // Second last element
    }

    // Print the result
    printf("Sum of first, second, last, and second last elements: %d\n", sum);
    
    return 0;
}
Print the sum of first element, second element,last element,second last element in an array Example : [1,2,4,5,5] Output:  1+2+5+5 = 13, [1,2,3] Output : 4