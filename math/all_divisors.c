// all_divisors.c
// a c program to print all of the divisors of a given number
// 02/14/2025

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}