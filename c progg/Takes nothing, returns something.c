//Takes nothing, returns something
#include <stdio.h>

// Function prototype
int add();

int main()
{
    int result = add();// Function call
    printf("Sum = %d\n", result);
    return 0;
}

// Function definition: 
int add()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}