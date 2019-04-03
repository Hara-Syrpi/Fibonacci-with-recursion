#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    int num,res,i;

    printf("Give n for fibonacci numbers calculation: ");
    scanf("%d",&num);
    printf("The fibonacci numbers are: ");

    for (i = 0; i < num; i++)
    {
        res = fibonacci(i);
        printf("%d, ",res);
    }

    res = fibonacci(num);
    printf("%d\n",res);

    return 0;
}

int fibonacci(int n)
{
    if (n == 0) return 0;

    else if (n == 1) return 1;

    else return fibonacci(n-1) + fibonacci(n-2);
}
