#include <stdio.h>
#define size 100

int main() {
    int i, j, k, n1, n2, a[size], b[size], c[size];

    printf("Enter the number of elements in array 1: ");
    scanf("%d", &n1);
    printf("Enter the elements of array 1: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in array 2: ");
    scanf("%d", &n2);
    printf("Enter the elements of array 2: ");
    for (j = 0; j < n2; j++) {
        scanf("%d", &b[j]);
    }

    // Corrected array declaration and initialization


    i = j = 0;
    for (k = 0; k < n1 + n2; k++) {
        if ((i < n1) && (j < n2)) {
            if (a[i] < b[j]) {
                c[k] = a[i];
                i++;
            } else {
                c[k] = b[j];
                j++;
            }
        } else if (i < n1) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
    }

    printf("Final sorted array: ");
    for (k = 0; k < n1 + n2; k++) {
        printf("%d ", c[k]);
    }
    printf("\n");

    return 0;
}
