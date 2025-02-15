// smallest_divisor.c
// A c program that prints the smallest divisor of n
// 02/15/2025

#include <stdio.h>

int main()
{

    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("smallest divisor is: %d\n", i);
            break;
        }
    }

    return 0;
}