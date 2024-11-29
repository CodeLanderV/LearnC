//write a c prog to display the height of the person 
// also print what category does he/she come into
// height: h>150 (tall), h<130(short), between 130 and 150(average)
#include<stdio.h>
void main(){
int h;
printf("Enter the height of the person (in centimeters) : ");
scanf("%d", &h);
printf("YOOOOOOOOOO YOU ARE %d CM????????????????? \n", h);
if(h>=180){
          printf(" HIGHEST IN THE ROOM \n");
          }
else {
     if(h<=130){
     printf("shawty want a rockstarrrrrrrrrr \n");
     }
     else {
     printf("Avg height. Valid. \n");
     }
     }
}



