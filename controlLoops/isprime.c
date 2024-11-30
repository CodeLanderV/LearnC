#include <stdio.h>

int main() {
    int s, e, i, j, checkprime;

    printf("Enter the s of the range: ");
    scanf("%d", &s);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", s, end);

    for (i = s; i <= end; i++) {
        if (i < 2) continue;
        checkprime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                checkprime = 0;
                break;
            }
        }
        if (checkprime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}