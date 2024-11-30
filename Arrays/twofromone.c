#include<stdio.h>

void calc(int a, int b, int sum[]){
    sum[0] = a+b;
    sum[1] = a*b;
}

int main() {
    int a, b;
    int sum[2];

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    calc(a,b, sum);

    printf("sum: %d\n", sum[0]);
    printf("product: %d\n", sum[1]);

    return 0;
    
}