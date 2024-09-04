// Program to check whether number is even or odd
#include <stdio.h>

void main()
{
    int number;

    printf("Enter an integer : ");
    scanf("%d", &number);
    // true if num is perfectly divisible by 2
    (number % 2 == 0) ? printf("%d is even number\n", number)
                      : printf("%d is odd number", number);
}