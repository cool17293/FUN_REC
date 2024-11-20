
#include <stdio.h>

// Function declaration
int power(int base, int exp);

int main() {
    int base, exp;

    // Input the base and exponent
    printf("base = ");
    scanf("%d", &base);

    printf("exp = ");
    scanf("%d", &exp);

    // Validate exponent
    if (exp < 1) {
        printf("Please enter an exponent greater than or equal to 1.\n");
    } else {
        // Calculate and print the result
        printf("%d^%d = %d\n", base, exp, power(base, exp));
    }

    return 0;
}

// Recursive function definition
int power(int base, int exp) {
    if (exp == 1) {
        return base; // Base case
    } else {
        return base * power(base, exp - 1); // Recursive case
    }
}