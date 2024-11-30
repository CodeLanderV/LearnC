#include <stdio.h>
int fact(int n);
int main(){
    int n,sum;
    printf(" ENTER THE NUMBER YOU WANT FACTORIAL OF: \n");
    scanf("%d",&n);
    sum = fact(n);
    printf(" THE FACTORIAL IS: %d \n", sum);
}

int fact(n){
    n = n*(n-1);
    fact(n-1);
}