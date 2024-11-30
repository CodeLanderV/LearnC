#include<stdio.h>
// 0 7 3 4 2 6 4
// Bubble Sort
void main(){
    int n,i;
    int arr[10];

    printf("Enter the number of elemetns you want in the array: \n");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        printf("Enter the elements: \n");
        scanf("%d", &arr[i]);
    }
     int swap; 
    // read through array
    for (int j = n; j<n-1; j++){
    for (int i=0; i<n-1; i++){
        swap = 0;
        if (arr[i]>arr[i+1]){
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            swap = 1;
        }
       if (swap == 0){
        break;
       }
    }
    }
     printf("new array: \n");
       for (int i=0; i<n; i++){
       printf("%d\t",arr[i]);
    }
}