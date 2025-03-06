// malloc.c
// 03/03/2025

#include <stdio.h>
#include <stdlib.h>



int *getArray(int n)
{
    int *ptr = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
        ptr[i] = i + 1; // *(ptr + i)
    }
    return ptr;
}

int main()
{
    int n = 5;
    int *ptr = getArray(n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    ptr = NULL;
    return 0;
}