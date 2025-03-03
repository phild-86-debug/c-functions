// free.c
// 3/13/2025

#include <stdio.h>
#include <stdlib.h>

int *getArray(int n)
{
    int *ptr = calloc(n, sizeof(int));
    return ptr;
}

int main()
{
    int n = 5;
    int *ptr = getArray(n);
    for(int i = 0; i < n; i++)
        printf("%d ", ptr[i]);
  	free(ptr);
  	ptr = NULL;
    return 0;
}