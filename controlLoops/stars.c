#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (j = rows - i; j > 1; j--) {
            printf(" ");
        }
        for (k = 0; k <= i * 2; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}