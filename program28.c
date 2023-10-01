#include<stdio.h>
int main(){
	int n,rev=0,rem=0;
	printf("Enter a number :");
	scanf("%d",&n);
	for(;n>=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("The reverse of the number is %d:",rev);
	return 0;
}