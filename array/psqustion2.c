#include <stdio.h>

int main() {
    int n, value;
    
    // Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[100];
    
    // Read the array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the value to compare
    printf("Enter the value to compare: ");
    scanf("%d", &value);
    
    // Traverse the array and remove elements greater than the given value
    int newSize = 0; // New size of the array after deletion
    for (int i = 0; i < n; i++) {
        if (arr[i] <= value) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    
    // Print the resulting array
    printf("Array after removing elements greater than %d:\n", value);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
filtering the elements .get value by using scanf. compare each element from the array with value .if arr element greater than value ,delete that particular array element from the array and decrement the size of an array.