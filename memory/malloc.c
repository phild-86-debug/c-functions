// malloc.c
// 03/03/2025

int *getArray(int n)
{
    int *ptr = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
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
    return 0;
}