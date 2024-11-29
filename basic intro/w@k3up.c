// monthly pay = hours worked in a week x rate per hour x total wees in a month
#include<stdio.h>
void main(){
float monpay, hoursweek, rateph, totweeks, temp;
printf("Enter the number of hours the employee worked in a week: ");
scanf("%f", &hoursweek);
printf("Enter the rate per hour(Rupees/hour): ");
scanf("%f", &rateph);
printf("Enter the weeks in the month: ");
scanf("%f", &totweeks);
temp = hoursweek*rateph;
monpay = temp*totweeks;
printf("You should pay the employee %f Rupees for this month \n", monpay);
}
