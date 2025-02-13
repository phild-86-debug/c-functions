// stars_singlerow.c
// 02/12/2025

#include <stdio.h>

int main()

{
    int n;
    printf("Enter an integer for n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%c", '*');


    }
    printf("\n");
}


