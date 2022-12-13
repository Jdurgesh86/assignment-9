#include<stdio.h>
int main()
{
    int num;
    int a,b,c;
    while(1)
    {
    printf("\n1.check isoceleous\n2.check right angled triangle\n3.Check equilatereal triangle\n4.exit");
    printf("\nEnter your choice ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
                printf("\nEnter the side lengths ");
                scanf("%d %d %d",&a,&b,&c);
                if(a==b||b==c||a==c)
                    printf("isoceleous triangle\n");
                else
                    printf("NOt an isoceleous triangle\n");
                break;
        case 2:
                printf("Enter the side lengths\n");
                scanf("%d %d %d",&a,&b,&c);
                if(a*a==(b*b+c*c)||c*c==(b*b+a*a)||b*b==(a*a+c*c))
                    printf("Right angled triangle\n");
                else
                    printf("Not an right angled triangle\n");
                break;
        case 3:
                printf("Enter the side lengths\n");
                scanf("%d %d %d",&a,&b,&c);
                if(a==b&&b==c)
                    printf("equilateral triangle\n");
                else
                    printf("NOt an equilateral triangle\n");
                break;
        default:
                break;
    }
    }
}