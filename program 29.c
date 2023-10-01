#include<stdio.h>
int main(){
	int n,rev=0,rem=0;
	printf("Enter a number :");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}

	printf("The reverse of the number is %d:",rev);
    if(num==rev){
        printf("The number is palindrome");
    }
    else 
    printf("The number is not palindrome");
    
	return 0;
}