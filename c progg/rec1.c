#include <stdio.h>

int fun(int n);

void main()
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    fun(n);
}

int fun(int n)
{
    if (n == 1)
    {
        printf("AdyashaKhamari\n");
    }
    else
    {
        printf("AdyashaKhamari\n");
        fun(n - 1);
    }
    return 0;
}