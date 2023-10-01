#include<stdio.h>
int main(){
    int day;
    printf("Enter the number of day (1-7):");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
    printf("THe day is monday\n");
    
        break;
        case 2:
        printf("The day is tuesday \n");
        break;
        case 3:
        printf("the day is wednesday \n");
        break;
        case 4:
        printf("The day is thursday\n");
        break;
        case 5:
        printf("The day is friday\n ");
        break;
        case 6:
        printf("The day is saturday\n");
        break;
        case 7:
        printf("The day is sunday\n");
        break;
    
    default:
    printf("INVALID INPUT");
        break;
    }
    return 0;
}