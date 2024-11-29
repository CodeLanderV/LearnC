// avg marks > 80 then A grade
// avg marks >60 and  <= 80 then B grade
// avg marks >40 and  <= 60 then C grade
// avg marks <40 then F grade

#include<stdio.h>

int main(){
    int avg,p,c,m;
    printf("Enter your pcm marks in an order: ");
    printf("Physics: ");
    scanf("%d",&p);
    printf("Chemistry: ");
    scanf("%d",&c);
    printf("Maths: ");
    scanf("%d",&m);
    avg = (p + c + m) / 3;
    // now lets start with if else conditions
    if (avg > 80){
        printf("A Grade");
    }
    else if (avg > 60 && avg <=80 ){
        printf("B Grade");
    }
    else if (avg > 40 && avg <= 60 ){
        printf("C Grade");
    }
    else{
        printf("F Grade");
    }
     return 0;
}