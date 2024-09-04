// Program to print power of number using while loop.
#include <stdio.h>

void main()
{
    int number, exp;
    double result = 1.0;

    printf("Enter a base integer : ");
    scanf("%d", &number);

    printf("Enter an exponent : ");
    scanf("%d", &exp);

    while (exp != 0)
    {
        result *= number;
        exp--;
    }

    printf("Answer is : %.0lf", result);
}