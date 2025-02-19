// gcd.c
// a program to find the greatest common divisor between two integers

#include <stdio.h>

int main()
{
    int x;
    int a, b;
    int gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if(a >= b)
        x = b;
    else
        x = a;
    
    // iterate from 1 to x: find integer that divides them both- greatest divisor will be last. 

    for(int i = 1; i <= x; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    printf("Greatest common divisor is: %d\n", gcd);
    return 0;

}