#include <stdio.h>

int is_odd(int num) {
    return (num ^ 1) == num - 1;
}

int main() {
    int num = -2;
    if (is_odd(num)) {
        printf("%d is odd.\n", num);
    } else {
        printf("%d is even.\n", num);
    }
    
    return 0;
}
