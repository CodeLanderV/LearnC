// speed of a vehicle = distance / time
#include<stdio.h>
void main(){
int s,d,t;
printf("Enter the distance covered: ");
scanf("%d", &d);
printf("Enter the time taken: ");
scanf("%d", &t);
s = d/t;
printf("The speed of vehicle is %d Kilometers per hour. \n", s);
}
