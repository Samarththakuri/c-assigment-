#include<stdio.h>
int main(){
    float height,base;
    printf("Enter the height and base:", height,base);
    scanf("%f %f",&height,&base);
    float area;
    area = 0.5*height*base;
    printf("The area is %f:",area);
    return 0;
}