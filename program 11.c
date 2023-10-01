//program to check if character is lowercase or uppercase
#include<stdio.h>
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        printf("The character is lowercase");
    }
        else if(c>='A' && c<='Z'){

        
        printf("The character is lowercase");
        }
        else 
        printf("it is not character");

    return 0;
    }


