#include <stdio.h>
int area(int l, int b);
int peri(int l, int b);
int main(){
    int l, b, a, p;
    printf("Enter the length: ");
    scanf("%d", &l);
    printf("Enter the breadth: ");
    scanf("%d", &b);
    a = area(l, b);
    p = peri(l, b);
    printf("The area of the rectangle is %d\n", a);
    printf("The perimeter of the rectangle is %d\n", p);
}

int area(l,b){
    int result;
    result = l*b;
    return result;
}

int peri(l,b){
    int result;
    result = 2*(l+b);
    return result;  
}
