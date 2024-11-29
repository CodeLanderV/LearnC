// program to chdeck if the number is even or odd
#include <stdio.h>

int main(){
    int n,i;
    printf("Enter the number: ");
    scanf("%d", &n);
    // to tell if a number is even, it should be divisible by 2
    if(n%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}