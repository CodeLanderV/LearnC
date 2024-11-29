// d > 0 then distinct
// d = 0 then equal real
// d < 0 then no real
// d = b*b-4*a*c
#include<stdio.h>
#include <ctype.h>
#include<math.h>

int main(){
    int d,b,a,c,i=0;
    printf("Enter the coefficiants of the equation(in the order a , b , c): \n");
    scanf("%d%d%d",&a,&b,&c);
    d = (b*b)-(4*a*c);
    if (d>0){
        printf("Distinct roots, no points\n");
        
    }
    if (d==0){
        printf("equal real roots, 20 points\n");
        i = i+20;
    }
    else{
        printf("no real roots, 10 points\n");
        i = i+10;
    }
    printf("your points are %d\n",i);
}