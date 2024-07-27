//to find the largest digit in a number
#include<stdio.h>
int main()
{
   int x,y,digit,largest=0;
   printf("enter a number:\n");
   scanf("%d",&x);
   x=y; // so that actual value of number remains preserved in y

   while(x!=0)
   {
    digit=x % 10;    // gives last digit of the number
    if(digit>largest)
    {
        largest=digit;
    }
    x=x/10;  //eliminates last digit and process is repeated
   }
   printf("the largest digit in number %d is %d:\n",y,largest);
   return 0;
}


/*
Let's consider an example where the user enters num = 58342.

1. Initial state:
   - num = 58342
   - largest = 0

2. First iteration:
   - digit = 58342 % 10 = 2
   - 2 > 0, so largest = 2
   - num = 58342 / 10 = 5834

3. Second iteration:
   - digit = 5834 % 10 = 4
   - 4 > 2, so largest = 4
   - num = 5834 / 10 = 583

4. Third iteration:
   - digit = 583 % 10 = 3
   - 3 < 4, so largest remains 4
   - num = 583 / 10 = 58

5. Fourth iteration:
   - digit = 58 % 10 = 8
   - 8 > 4, so largest = 8
   - num = 58 / 10 = 5

6. Fifth iteration:
   - digit = 5 % 10 = 5
   - 5 < 8, so largest remains 8
   - num = 5 / 10 = 0

7. Loop ends:
   - num is now 0, so the loop exits.
   - The largest digit found is 8.
*/