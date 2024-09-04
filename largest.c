// Program to find the largest number among three number
#include <stdio.h>

void largest_number(int a, int b, int c)
{
    if (a > b && a > c)
        printf("%d is a largest number", a);
    else if (b > a && b > c)
        printf("%d is a largest number", b);
    else if (c > a && c > b)
        printf("%d is a largest number", c);
    else if (a == b && b == c)
        printf("%d = %d = %d", a, b, c);
}

void main()
{
    int number1, number2, number3;

    printf("Enter three different number : ");
    scanf("%d %d %d", &number1, &number2, &number3);
    largest_number(number1, number2, number3);
}