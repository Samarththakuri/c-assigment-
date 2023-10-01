//• Fibonacci Series Program in C Using DO While Loop
#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter the limit:");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",a);
    }
    return 0;
    
}