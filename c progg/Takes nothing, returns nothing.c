//Takes nothing, returns nothing
#include <stdio.h>

// Function prototype
void add();

int main() {
    add();//Function call
    return 0;
}

// Function definition: 
void add() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
}