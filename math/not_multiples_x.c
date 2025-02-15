// not_multiples_x.c
// A c program that prints the numbers from 1 to n that are not multiples of x.

#include <stdio.h>

int main()
{
    int n, x;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter x: ");
    scanf("%d", &x);

    for(int i = 1; i <= n; i++)
    {
        if(i % x == 0)
        {
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}