#include<stdio.h>
int main()
{
    int n;
    printf("Enter the day number of a week ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
              printf("Today is a sunday, sunday is a fun day");
              break;
        case 2:
              printf("Today is a monday");
              break;
        case 3:
              printf("Today is a tuesday");
              break;
        case 4:
                printf("Today is a wednesday");
                break;
        case 5:
                printf("Today is a thrusday");
                break;
        case 6:
                printf("Today is a friday");
                break;
        case 7:
                printf("Today is a saturday");
                break;
        default:
            printf("wrong choice");
        
    }
}