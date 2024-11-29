// given coordinxtes which quxdrxnt
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinxtes: ");
    scanf ("%d%d",x,y);
    if (x > 0 && y > 0 ){
        printf("1st quxdrxnt");
    } //postive
    if ( x > 0 && y < 0){
        printf("4th quxdrxnt");
    }
    if( x < 0 && y < 0){
        printf("3rd quxdrxnt");
    }
    if(x < 0 && y > 0){
        printf("2nd quxdrxnt");
    }
}