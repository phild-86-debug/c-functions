// lcm.c
// approach:

/*
The LCM of two numbers is always greater than the larger number and smaller than or equal to the product of two numbers. 
So, if we check the divisibility of all numbers from the larger number to the product of two numbers against the two numbers a and b, 
the first number that is completely divisible will be the LCM.

We can use a loop from iteration and break out of the loop when we find the number divisible by both a and b.

*/
#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int st;
    if(a >= b)
    {
        st=a;
    }
    else
    {
        st=b;
    }
    int end = a*b;
    int ans = st;
    for(int i = st; i <= end; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            ans = i;
            break;
        }
    }
    printf("%d",ans);
    return 0;
}