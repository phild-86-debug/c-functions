#include <stdio.h>

// Function to find the nth Fibonacci number iteratively
int fibonacci(int n) {
    int a = 0, b = 1, next;

    if (n == 0)
        return a;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;

    printf("Enter the position (n) of the Fibonacci number: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));

    return 0;
}
