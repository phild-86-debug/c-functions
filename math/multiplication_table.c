//  multiplication_table.c
// 02/12/2025

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number for n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 12; j++)
        {
            printf("%4d", i * j);
        }
        printf(" \n");
    }
    return 0;


}

