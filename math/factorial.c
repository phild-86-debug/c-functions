// factorial.c
// a c program that prints the factorial of a number
// 02/13/2025

#include <stdio.h>

int main()
{
    int n;
    int ans = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n > 0)
    {
        ans = ans * n;
        n--;
    }
    printf("The factorial of %d is: %d\n", n, ans);
    return 0;
}