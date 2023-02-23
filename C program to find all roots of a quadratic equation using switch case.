#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,delta;
    float root1,root2,realPart,imagPart;
    printf("enter the values of a,b,c \n");
    scanf("%f%f%f",&a,&b,&c);
    delta=(b*b)-(4*a*c);
    switch(delta>0)
    {
        case 1: 
                root1= (-b+sqrt(delta))/(2*a);
                root2=(-b-sqrt(delta))/(2*a);
                printf("if two distinct and real roots exists : %.2f and %.2f",root1,root2);
                break;
        case 0: 
                if (delta == 0) 
                {
                    root1 = root2 = -b / (2 * a);
                    printf("root1 = root2 = %.2lf;", root1);
                }
                // if roots are not real
                else {
                        realPart = -b / (2 * a);
                        imagPart = sqrt(-delta) / (2 * a);
                        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
                    }
                    break;
    }
}
