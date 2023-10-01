//Find the Greatest Among Three Numbers
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("num1 is greatest %d ", num1);
    }
    else if(num2>num1 &&num2>num3){
        printf("num2 is greatest %d",num2);
    }
    else 
    printf("num3 is the greatest %d",num3); 
    return 0;
}