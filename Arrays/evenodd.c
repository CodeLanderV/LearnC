//take input store even and odd elements into seperate array
#include <stdio.h>
 
void main(){
    int i, n,a[10],even[10],odd[10];

    //input elements
    printf("Enter how many elements you want: \n");
    scanf("%d", &n);
    
    printf("Enter %d elements: \n", n);
    for ( i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    // even and odd count
    int evencount, oddcount;
    for (i=0; i<n; i++){
        if (a[i]%2 == 0){
            even[evencount++] = a[i];
        } else {
            odd[oddcount++] = a[i];
        }
    }

        
    printf("Even elements:\n");
    for (i = 0; i < evencount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Print odd elements
    printf("Odd elements:\n");
    for (i = 0; i < oddcount; i++) {
        printf("%d", odd[i]);
    }
}