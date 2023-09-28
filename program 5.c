//program to find percentage of 5 subjects
#include<stdio.h>
int main(){
    float subject1,subject2,subject3,subject4,subject5;
    float percentage;
    float total;
    printf("Enter the marks in subject1:");
    scanf("%f",&subject1);
    printf("Enter the marks in subject2:\n");
    scanf("%f",&subject2);
    printf("Enter the marks in subject3:\n");
    scanf("%f",&subject3);


    printf("Enter the marks in subject4:\n");
    scanf("%f",&subject4);
    printf("Enter the marks in subject5:\n");
    scanf("%f",&subject5);
    total = subject1+subject2+subject3+subject4+subject5;
percentage=(total/500.0)*100;
printf("The percentage is :%f", percentage);
return 0;


}