//• Leap Year Program in C with Logic, Explanation and Output
#include <stdio.h>
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100==0)
    printf("The year is leap year %d",year);
    else
    ("The year is non leap year %d",year);
    return 0;

}


