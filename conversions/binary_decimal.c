// binary_decimal.c
// a c program that converts binary to decimal
// 2/19/2025

#include <stdio.h>

int binaryToDecimal(int B)
{
    int num =  B;
    int dec_value = 0;

    int base = 1;

    int temp = num;

    while(temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }

    return dec_value;
}

// Driver program 
int main() 
{ 
    int num = 1111; 
    printf("%d", binaryToDecimal(num)); 
}

