#include <stdio.h>
int max3(int x, int y, int z);
int main(){
    int m,x,y,z;
    m = max3(x,y,z);
    printf("the highest number is %d\n", m);
}
int max3(int x, int y, int z){
    printf("enter the first number: \n");
    scanf("%d", &x);
    printf("enter the second number: \n");
    scanf("%d", &y);
    printf("enter the third number: \n");
    scanf("%d", &z);
    int result;
    if(x>y && x>z){
        result = x;
    } else if(y>x && y>z){
        result = y;
    } else {
        result = z;
    }
    return result;
}