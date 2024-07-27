//use math library pow(),sqrt() etc
#include <stdio.h>
#include <math.h>

int main() {
    double number, base, power, result;

    // Read a number to calculate its square root
    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);

    // Calculate the square root using sqrt()
    result = sqrt(number);
    printf("The square root of %lf is %lf\n", number, result);

    // Read the base and exponent for power calculation
    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &power);

    // Calculate the power using pow()
    result = pow(base, power);
    printf("%.2f raised to the power of %.2f is %.2f\n", base, power, result);

    return 0;
}