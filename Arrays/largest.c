#include <stdio.h>

int main() {
    int n, i;
    int a[100]; // Assuming a maximum size of 100 for the aay
    int max;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements of the aay
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize the max variable with the first element of the aay
    max = a[0];

    // Iterate through the aay to find the max element
    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    // Print the max element
    printf("The max number in the array is: %d\n", max);

    return 0;
}