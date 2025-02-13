// triangle.c
// 02/13/2025

#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int row = 0; row < n; row++)
    {
        for(int column = 0; column < row; column++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
    return 0;


}
