//program for finding roots of quadratic equation .coefficients entered by user. all cases included
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, r1, r2, d;
    float realPart, imaginaryPart;

    printf("Enter the values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("You have not entered a quadratic equation, please check again.\n");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots of the given quadratic equation are real and distinct: r1 = %f and r2 = %f\n", r1, r2);
    } else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("The given quadratic equation has two real and equal roots: r1 = r2 = %f\n", r1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-d) / (2 * a);
        printf("The roots of the given quadratic equation are imaginary: r1 = %f + %fi and r2 = %f - %fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}