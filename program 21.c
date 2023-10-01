//• C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main(){
    int n;
    int rem=0,rev=0;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=n;i>0;){
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;
    }
    printf("The reverse order is:%d ",rev);
    return 0;
}