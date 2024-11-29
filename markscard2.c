#include<stdio.h>
main(){
int phy,chem,math,tot;
printf("Please enter your phy,chem,math marks.");
scanf("%d%d%d", &phy,&chem,&math);
tot=phy+chem+math;
printf("\t \t \t Marks card \t \t \t \n ");
printf("\t SUBJECT: \t \t Marks: \t \t \n");
printf("\t PHYSICS: \t \t %d \t \t \n",phy);
printf("\t MATHS: \t \t %d \t \t \n",math);
printf("\t CHEMISTRY: \t \t %d \t \t \n", chem);
printf("\t TOTAL: \t \t  %d \t \t \n",tot);
return 0;
}
