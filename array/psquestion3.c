#include <stdio.h>

// Function to sort an array in ascending order
void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    
    // Read the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[100];
    
    // Read the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result[100]; // Array to store the elements that are greater than all elements to their right
    int resultSize = 0;
    int maxSoFar = arr[n-1]; // The rightmost element is always included
    
    result[resultSize++] = maxSoFar;
    
    // Traverse the array from second last to the first element
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > maxSoFar) {
            result[resultSize++] = arr[i];
            maxSoFar = arr[i];
        }
    }
    
    // Sort the result array
    sortArray(result, resultSize);
    
    // Print the sorted result array
    printf("Output: ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }
    
    
    return 0;
}
find the element in an array that are greater than all elements to their right and print them in ascending order sample input : 5 arr: 5 3 20 15 8 ouput: 8 15 20