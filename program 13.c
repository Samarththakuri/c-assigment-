// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int power1,power2,power3;
    power1=n*1;
    power2=n*n;
    power3=n*n*n;
    printf("The first three power are: %d %d %d",power1,power2,power3 );
    return 0;
}
