//program to calculate compound interest
#include<stdio.h>
#include<math.h>
int main()
{
    double principal,rate,amount;
    int timescompound ,years;
    printf("enter the principal amount:\n");
    scanf("%lf",&principal);
    printf("enter the annual interset rate in percentages:\n");
    scanf("%lf",&rate);
    rate=rate/100;  //to convert percentage into decimal
    printf("enter the number of times intesest is compounded per year:\n");
    scanf("%d",&timescompound);
    printf("enter the number of years:\n");
    scanf("%d",&years);
    amount=principal*pow(1+rate/timescompound,timescompound*years);    //     A=P(1+r/n)^nt where a is amount of money accumulated after n years,p is principal, r is annual interest ,n is number of times that interest is compounded per year
    printf("the amount after %d years is %.2lf\n", years,amount);
    return 0;
}