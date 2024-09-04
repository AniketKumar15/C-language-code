// Program to reverse of number.
#include <stdio.h>

void main()
{
    int number, rem, result = 0;

    printf("Enter an integer : ");
    scanf("%d", &number);

    printf("Brfore Reverse Number is : %d\n", number);

    for (int i = 0; number != 0; i++)
    {
        rem = number % 10;
        result = result * 10 + rem;
        number /= 10;
    }

    printf("After Reverse Number is : %d", result);
}