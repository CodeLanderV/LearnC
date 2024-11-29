// to check if the entered char is lowercase or uppercase
#include<stdio.h>
 #include<ctype.h>
 int main(){
    char c;
    printf("Enter a lower case or UPPER CASE letter: ");
    scanf("%c",&c);
    if (isupper(c)){
        printf("Upper Case");
    }
    else {
        printf("Lower case");
    }    
    }