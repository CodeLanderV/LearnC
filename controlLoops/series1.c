#include <stdio.h>

int main() {
    int n, i, j;
    double sum = 0.0, factorial;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int i = 1, j = 1;
    while (i <= n) {
        factorial = 1.0;
        for (j <= i) {
            factorial *= j;
            j++
        }
        sum += i / factorial;
        i++;
    }

    printf("Sum of the series: %.2lf\n", sum);

    return 0;
}