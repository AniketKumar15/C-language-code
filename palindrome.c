// Program to check given number is palindrome
#include <stdio.h>

void main()
{
    int number, rem = 0, revers = 0, tem;

    printf("Enter an integer : ");
    scanf("%d", &number);

    tem = number; // Here we store orignal number to tem number.

    for (int i = 0; number != 0; i++)
    {
        rem = number % 10;
        revers = revers * 10 + rem;
        number /= 10;
    }

    printf("After revers Number is : %d\n", revers);

    number = tem; // Here we get the store in tem to orinal number.

    // Checking the number is palindrome or not
    // To check number is palindrome, the revers number must be equal to orignal number.

    if (revers == number)
    {
        printf("%d is a palindrome number\n");
    }
    else
    {
        printf("%d is a not a palindrome number\n");
    }
}