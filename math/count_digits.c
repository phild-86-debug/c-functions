// count_digits.c
// 02/14/2025

#include <stdio.h>

int main()
{

    int n;
    int counter = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n < 0)
        n = -n;
    int i = n;

    while(i > 0)
    {
        
        i /= 10;
        counter ++;
    }
    if(n == 0)
        {
            counter  = 1;
        }


    printf("There are %d digits in the number\n", counter);
}