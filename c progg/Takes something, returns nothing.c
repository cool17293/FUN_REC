//Takes something, returns nothing
#include <stdio.h>

// Function prototype
void add(int a, int b);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    add(num1, num2);//Function call
    return 0;
}

// Function definition: 
void add(int a, int b) {
    printf("Sum = %d\n", a + b);
}