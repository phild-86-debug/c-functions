// fibonacci.c
// 02/14/2025

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int c = 0;
  
    //printf("1 1 ");
    for(int i = 2; i < n; i++)
    {
        c = a + b;
        // printf("%d ",c);
        a = b;
        b = c;
    }

    printf("%d\n", c);
    return 0;
}