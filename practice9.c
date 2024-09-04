//program that takes hours and minutes as input and calculates the total number of minutes
#include <stdio.h>

int main() 
{
    int hours, minutes, totalMinutes;
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    totalMinutes = (hours * 60) + minutes;
    printf("Total number of minutes: %d\n", totalMinutes);

    return 0;
}