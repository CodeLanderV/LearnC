#include <stdio.h>

// Function without argument and without return type
void add() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
}

// Function without argument and with return type
int add2() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

// Function with argument and without return type
void add3(int a, int b) {
    printf("Sum: %d\n", a + b);
}

// Function with argument and with return type
int add4(int a, int b) {
    return a + b;
}


int main(){
    int x,y,s;
  
    // Function without argument and without return type
    add();

    // Function without argument and with return type
    sum = add2();
    printf("Sum: %d\n", sum);

    // take values
      printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);


    // Function with argument and without return type
    add3(x, y);

    // Function with argument and with return type
    sum = add4(x, y);
    printf("Sum: %d\n", sum);

    return 0;
    

    // add: without argument
}