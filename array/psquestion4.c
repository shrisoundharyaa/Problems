#include <stdio.h>
#include <stdlib.h>

// Comparator function to sort in descending order
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n1, n2;
    
    // Read the size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    
    int arr1[100];
    
    // Read the elements of the first array
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Read the size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    
    int arr2[100];
    
    // Read the elements of the second array
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Calculate the sum of the first array
    int sum1 = 0;
    for (int i = 0; i < n1; i++) {
        sum1 += arr1[i];
    }
    
    // Calculate the sum of the second array
    int sum2 = 0;
    for (int i = 0; i < n2; i++) {
        sum2 += arr2[i];
    }
    
    // Check if the sum of the first array is less than the sum of the second array
    if (sum1 >= sum2) {
        printf("The sum of the first array should be less than the sum of the second array.\n");
        return 1;
    }
    
    // Sort the second array in descending order
    qsort(arr2, n2, sizeof(int), compare);
    
    // Find the minimum number of elements from the second array whose sum is greater than or equal to the sum of the first array
    int partialSum = 0;
    int count = 0;
    for (int i = 0; i < n2; i++) {
        partialSum += arr2[i];
        count++;
        if (partialSum > sum1) {
            break;
        }
    }
    
    // Print the minimum count of elements
    printf("Minimum count of elements: %d\n", count);
    
    return 0;
}
Get two user array, the sum of the first array should be less than the sum of the second array, add the elements of the second array, and print the min count of the number of elements that can added to get the sum of the first array.Sample input: 5
7 1 5 3 6
Output: 1