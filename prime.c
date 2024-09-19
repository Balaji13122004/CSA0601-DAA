#include <stdio.h>

int isPrime(int n) {
    int i;  // Declare the variable outside the for loop
    if (n <= 1) return 0; // 0 and 1 are not prime numbers
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0; // Not a prime number if divisible by i
    }
    return 1; // Prime number
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

