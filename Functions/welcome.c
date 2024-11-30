#include <stdio.h>
void welcome(); //function declaration
void main() {
    printf("before fucntion\n");
    welcome(); //function calling
    printf("after function\n");
}
void welcome() {
    printf("Welcome to the C Programming Language!\n"); // function definition

}