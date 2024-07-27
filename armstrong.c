//check whether a number is armstrong or not(for three digits only)
/*- *153* is an Armstrong number because \(1^3 + 5^3 + 3^3 = 153\).
- *9474* is an Armstrong number because \(9^4 + 4^4 + 7^4 + 4^4 = 9474\).

To determine if a number is an Armstrong number:
1. Calculate the number of digits in the number.
2. Raise each digit to the power equal to the number of digits.
3. Sum these values.
4. If the sum equals the original number, it is an Armstrong number.*/

#include <stdio.h>
int main()
{
    int n,r,orig,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    orig=n;
    while(n!=0)
    {
       r=n%10;
       sum=sum+r*r*r;
       n=n/10;
    }
    if(sum==orig)
    {
        printf("the number is an armstrong number");
    }
    else
    {
        printf("the number is not armstrong number");
    }
return 0;
}

