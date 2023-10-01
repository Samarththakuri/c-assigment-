 //• Largest of Three Numbers in C Using Nested if Else
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number :");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
    printf("The first is largest %d",num1);
    }
    else if (num2>num1 && num2>num3){
        printf("The second number is largest %d",num2);
    }
    else
    printf("The third number is largest %d",num3);
    return 0;
}