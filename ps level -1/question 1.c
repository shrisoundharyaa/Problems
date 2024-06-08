// Input a number n and check whether it is even or odd and if it's odd print the odd number
// before n and if it's even number,print the even numbers before n



#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        printf("%d is even.\n", n);
        printf("Even numbers before %d are: ", n);
        for (int i = 2; i < n; i += 2) {
            printf("%d ", i);
        }
        printf("\n");
    } else {
        printf("%d is odd.\n", n);
        printf("Odd numbers before %d are: ", n);
        for (int i = 1; i < n; i += 2) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}
