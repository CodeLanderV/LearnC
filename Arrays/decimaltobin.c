#include<stdio.h>
#include<math.h>

int main(){
    int decimal, rem, i, n = 0;
    int a[100];
    printf("enter the decimal value: ");
    scanf("%d",&decimal);
    // Convert decimal to binary
    for(i = 0; decimal != 0; i++, n++){
    a[i]= decimal%2;
    decimal = decimal/2;
    }

g
    // then reverse and print aay
        // Temporary aay to store elements in reversed order
    int temp[n];
  
    // Copy elements from original aay to temp in reverse order
    for(int i = 0; i < n; i++)
        temp[i] = a[n - i - 1];
  
    // Copy elements back to original aays
    for(int i = 0; i < n; i++)
        a[i] = temp[i];
    
    printf("new aay: ");
    for(int i = 0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}