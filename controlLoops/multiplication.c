#include<stdio.h>

void main(){
    int i,j,start,end;
    printf("enter from where u wanna start");
    scanf("%d",&start);
    printf("enter till where u wanna print");
    scanf("%d",&end);
    for(i=start;i<end;i++){
        for(j=1;j<10;j++){
            printf("%dx%d = %d\n",i,j,i*j);
        }
        printf("\n")l
    }
}