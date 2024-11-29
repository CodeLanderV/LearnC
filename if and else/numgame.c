#include<stdio.h>
#include<ctype.h>
int main(){
    char c, i;
    printf("Enter something: ");
    scanf("%c", &c);
    if  (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
        printf("it is a vowel you get 5 points.");
        i = i+5;
    }
    if(isdigit(c)){
        printf("It is a number you get 10 points.");
       i = i+10;
    }
    else{
        printf("no points.");
    }
    
}