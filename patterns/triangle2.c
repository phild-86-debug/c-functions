// triangle2.c
// a c program that prints a triangle

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
