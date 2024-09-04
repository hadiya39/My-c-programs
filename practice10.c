//program that inputs minutes and calculates total number of hours and minutes
#include <stdio.h>

int main()
 {
    int totalMinutes, hours, minutes;
    printf("Enter the total number of minutes: ");
    scanf("%d", &totalMinutes);
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;
    printf("Equivalent time: %d hours and %d minutes\n", hours, minutes);

    return 0;
}
