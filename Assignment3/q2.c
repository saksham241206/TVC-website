// Q2.c: Find the greatest of 3 integers
#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    printf("Greatest (using if-else): %d\n", max);

    
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    printf("Greatest (using ternary): %d\n", max);

    return 0;
}