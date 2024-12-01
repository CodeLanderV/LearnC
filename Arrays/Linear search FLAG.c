#include <stdio.h>
#include <stdbool.h> // Include the header for boolean type

int main() {
    int n, i, s, count = 0;
    int a[100]; // Assuming a maximum size of 100 for the array
    bool found = false; // Initialize the flag to false

    // Input the number of elements
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // SEARCHING
    printf("Enter the number you want to search: \n");
    scanf("%d", &s);

    // ITERATING THE ARRAY
    for(i = 0; i < n; i++) {
        if(a[i] == s) {
            if (!found) {
                printf("The number has been found. Its first position is %d\n", i+1);
                found = true; // Set the flag to true
            }
            count++;
        }
    }

    if(!found) {
        printf("The number was not found in the array.\n");
    } else {
        printf("The number was found %d times in the array.\n", count);
    }

    return 0;
}