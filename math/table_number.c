// table_number.c
// print mult table of n up to m times

#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter two integers for the multiplication table: ");
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= m; i++)
    {
        printf("%d\n", i * n);
    }
    return 0;
}