// least_common_multiple.c
// A c program that computes the least common multiple between two numbers. 
// The lcm is the least number that divides both numbers. 
#include <stdio.h>

int main()
{
    int lcm;
    int a, b, x;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if(a >= b)
        x = a;
    else
        x = b;

    for(int i = x; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("The lcm is: %d\n", lcm);
    return 0;

}

