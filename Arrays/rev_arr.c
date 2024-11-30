#include<stdio.h>

int main(){
    int arr[100];
    int n;

    printf("lets enter the array: ");
    printf("size?");
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Temporary array to store elements in reversed order
    int temp[n];
  
    // Copy elements from original array to temp in reverse order
    for(int i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];
  
    // Copy elements back to original arrays
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
    
    printf("new array");
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
