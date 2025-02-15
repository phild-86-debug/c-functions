// nested_natural_numbers.c
// prints a multipication table from 1 to n using nested loops

#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer for n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            printf("%6d ", j * i);
        }

        printf("\n");
    }
    return 0;
}