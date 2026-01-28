#include <stdio.h>
#include <math.h> // Required for sqrt()

int main() {
    float a, b, c, d, r1, r2; // Declare roots as floats too

    printf("Enter the value of a, b, c (separated by spaces): \n");
    // Use %f for floats. Removed commas to make input easier.
    scanf("%f %f %f", &a, &b, &c); 

    d = b * b - 4 * a * c;

    if (d >= 0) {
        // Use sqrt(d) because the formula requires the square root of the discriminant
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        
        printf("Root 1 = %f \nRoot 2 = %f", r1, r2);
    } else {
        printf("Roots are imaginary (D < 0).");
    }

    return 0;
}
