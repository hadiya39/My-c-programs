// define and use a constant pi as 3.14159 in program

#include <stdio.h>

// Define the constant PI
#define PI 3.14159

int main()
 {
    float r, c, area;

    // Read the radius from the keyboard
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    // Calculate the circumference and area
    c= 2 * PI*r;
    area = PI *r*r;

    // Print the results
    printf("Circumference of the circle: %f\n", c);
    printf("Area of the circle: %f\n", area);

    return 0;
}
