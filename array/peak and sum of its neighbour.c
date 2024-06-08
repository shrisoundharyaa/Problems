#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peakIndex = -1;
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            peakIndex = i;
            break;
        }
    }

    if (peakIndex != -1) {
        int sum = arr[peakIndex - 1] + arr[peakIndex] + arr[peakIndex + 1];
        printf("Peak Element: %d\n", arr[peakIndex]);
        printf("Sum of Neighbors: %d\n", sum);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}
