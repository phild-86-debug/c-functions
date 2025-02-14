// next_prime.c
// 02/14/2025

#include <stdio.h>

int nextPrime(int n) {
    while(1) {
        int i;
        for(i = 2; i < n; i++) {
            if(n % i == 0)
                break;
        }
        if(i == n)
            return n;
        n++;
    }
}

int main()

{
    int n;
    scanf("%d", &n);
    printf("%d\n", nextPrime(n + 1));
  
    return 0;
}