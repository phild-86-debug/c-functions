

#include <stdio.h>


void printBinary(unsigned int num) {
    int started = 0;
    for (int i = 31; i >= 0; i--) {
        unsigned int mask = 1 << i;
        if (num & mask) {
            started = 1;
            printf("1");
        } else if (started) {
            printf("0");
        }
    }
    if (!started) {
        printf("0");
    }
}

int main() {
    unsigned int value = 37; // Example number
    printf("Binary representation of %u is: ", value);
    printBinary(value);
    printf("\n");
    return 0;
}