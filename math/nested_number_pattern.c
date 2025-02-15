// nested_number_pattern.c

#include <stdio.h>

int main()
{
    int width = 4;
    int height = 4;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}