#include <stdio.h>

int main() {
    int a = 5; // 0101 in binary
    int b = 9; // 1001 in binary
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
