//  Generate a Multiplication Table for Multiple Numbers (1D Array with Loops) ai gen

#include <stdio.h>

int main() {
    int n, i, j;
    int numbers[10]; // Assuming a maximum of 10 numbers

    // Input the number of elements
    printf("Enter the number of elements (up to 10): \n");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d numbers: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Generate and print multiplication tables
    for(i = 0; i < n; i++) {
        printf("Multiplication table for %d:\n", numbers[i]);
        for(j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", numbers[i], j, numbers[i] * j);
        }
        printf("\n"); // Add a newline for better readability
    }

    return 0;
}