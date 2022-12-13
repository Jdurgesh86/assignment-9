#include<stdio.h>
int main()
{
    int unit;
    float totalBill,bill;
    printf("Enter your elctricity consumption as in unit ");
    scanf("%d",&unit);
    switch(unit)
    {
        case 1 ... 50 :
           bill=0.5*unit;
           totalBill=bill+0.2*bill;
           printf("your total bill with charges is %.2f",totalBill);
        case 51 ... 150 :
           bill=0.75*unit;
           totalBill=bill+0.2*bill;
           printf("your total bill with charges is %.2f",totalBill);
        case 151 ... 250 :
           bill=1.20*unit;
           totalBill=bill+0.2*bill;
           printf("your total bill with charges is %.2f",totalBill);
        case >250:
           bill=1.5*unit;
           totalBill=bill+0.2*bill;
           printf("your total bill with charges is %.2f",totalBill);
    }

}