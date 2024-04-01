#include <stdio.h>
int main() {
    double number, sum = 0;
    do {      
        printf("Enter a number (enter 0 to exit): ");
        scanf("%lf", &number);
        sum += number;
    } while (number != 0.0); 
    printf("Sum of entered numbers: %.2lf", sum);
    return 0;
}