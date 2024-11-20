//check a number is perfect or not

#include <stdio.h>

int Perfect(int num)
{
    int sum = 0;
 
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    return (sum == num);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (Perfect(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}