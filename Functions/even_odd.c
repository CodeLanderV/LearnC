#include <stdio.h>
int even(int x);
int main(){
    int i,x;
    printf("enter a value: \n");
    scanf("%d\n",&x);
    i = even(x);
    if (i == 1){
        printf("Even\n");
    }
    else {
        printf("odd\n");
    }
}

int even(x){
    if (x%2 == 0){
        return 1;
    }
}