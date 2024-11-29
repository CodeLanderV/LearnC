#include<stdio.h>
void main(){
float r, l, b, ac, at;
printf("Please enter radius of circle: ");
scanf("%f", &r);
ac = 3.14*r*r;
printf(" The area is %f\n", ac);
printf("please enter lenght and height of triangle: ");
scanf("%f%f", &l, &b);
at = 0.5*l*b;
printf(" The area is %f\n", at);
}
