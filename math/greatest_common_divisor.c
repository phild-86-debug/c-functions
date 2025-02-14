// greatest_common_divisor.c
// a c program that finds the greatest common divisor for two numbers
// 02/15/2025

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int x;

    if (a >= b)
    {
        x = b;
    }
  	else
    {
        x = a;
    }

    int ans = 1;

    for (int i = 1; i <= x; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }

    printf("%d", ans);
    return 0;
}