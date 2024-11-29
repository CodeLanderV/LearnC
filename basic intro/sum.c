#include<stdio.h>
int main(){
int a, b, c, d;
printf("Enter the prices of the three");
scanf("%d%d%d" ,&a,&b,&c);
//scanf("%d", &a);
//scanf("%d", &b);
//scanf("%d", &c);
d=a+b+c;
printf("The sum of the prices are: %d\n",d);
return 0;
}
