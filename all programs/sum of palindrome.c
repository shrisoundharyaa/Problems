#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int sumPalindromes(int N) {
    int palindromeSum = 0;
    for (int num = 1; num <= N; num++) {
        if (isPalindrome(num)) {
            palindromeSum += num;
        }
    }
    return palindromeSum;
}

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    int result = sumPalindromes(N);
    printf("The sum of palindrome numbers from 1 to %d is %d.\n", N, result);

    return 0;
}
