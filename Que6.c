#include<stdio.h>
int main()
{
    int year,y;
    printf("Enter the year ");
    scanf("%d",&year);
    y=(year%4==0&&year%100!=0)||year%400==0;
    switch(y)
    {
        case 1: printf("Leap year");
                break;
        case 0: printf("Not a leap year");
                break;
        default:
                printf("Not a leap year");
    }
}