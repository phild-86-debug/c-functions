// A c program to find the first digit of a number. 
// first_digit_num.c

#include <stdio.h>

int main()
{
    int user_input;
    printf("Enter an integer value: ");
    scanf("%d", &user_input);

    while(user_input >= 10)
    {
        user_input /= 10;

    }
    
    printf("The first digit of the entered number is: %d\n", user_input);
    return 0;


}


