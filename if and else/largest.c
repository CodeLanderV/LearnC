// largest among three numbers
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    if (a>b && a>c){
        printf("A is greatest");
    }
    else if( b>c && b>a){
        printf("B is the greatest");
    }
    else{
        printf("C is the greatest");
    }
    
}
    
    
