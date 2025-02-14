// Given n, a c  program that checks to see if n is a prime number or not.  The output prints prime or not prime. 
// 02/13/2025

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to check for prime: ");
    scanf("%d", &n);

    int isPrime = 1; // Assume n is prime

    if (n <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // n is not a prime number
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

}