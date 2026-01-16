#include <stdio.h>

#define ROWS 3
#define COLS 4

void selection_sort_col(int arr[][COLS]) {
    for (int c = 0; c < COLS; c++) {
        for (int i = 0; i < ROWS - 1; i++) {
            int min = i;
            for (int j = i + 1; j < ROWS; j++) {
                if (arr[j][c] < arr[min][c]) {
                    min = j;
                }
            }
            int temp = arr[i][c];
            arr[i][c] = arr[min][c];
            arr[min][c] = temp;
        }
    }
}



int main() {
    int a[ROWS][COLS] = {
        {9, 2, 7, 1},
        {4, 8, 3, 6},
        {5, 0, 2, 9}
    };

    selection_sort_col(a);

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++)
            printf("%d ", a[r][c]);
        printf("\n");
    }
}
