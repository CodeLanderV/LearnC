// seconds / 60 =min. min/60 =hours.
#include<stdio.h>
void main(){
int i,h,m,s;
printf("Please tell me the time: ");
scanf("%d", &i);
m = i/60 ;
h = m/60;
s = i%60;
printf("It is %d hours\t %d minutes\t %d seconds\n", h,m,s);
}
