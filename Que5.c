#include <stdio.h>
int main()
{
    int val;
    printf("Enter a value");
    scanf("%d",&val);
    switch(val)
    {
        case 1:
             printf("good");
             break;
        case 2:
             printf("better");
             break;
        case 3:
             printf("best");
             break;
        default :
             printf("invalid");
    }
}