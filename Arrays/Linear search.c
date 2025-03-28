// Linear Search

#include <stdio.h>

void main() {
    int n, i, s, count = 0;
    int a[100]; // Assuming a maximum size of 100 for the array

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
            printf("The number has been found. Its position is %d\n", i+1);
            count++;
        }
    }

    if(count == 0) {
        printf("The number was not found in the array.\n");
    } else {
        printf("The repetition of the element is %d\n", count);
    }

}
