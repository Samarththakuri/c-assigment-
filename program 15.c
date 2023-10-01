//Checking Whether You Are Eligible for Voting or Not
#include<stdio.h>
int main(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18){
        printf("person is elligible to vote");
    }
    else
    printf("not elligible to vote");
    return 0;
}