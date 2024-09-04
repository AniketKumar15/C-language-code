// Program to print multiplication table upto n term
#include <stdio.h>

void main()
{
    int number, range, multiplication;

    printf("Enter an positive integer :");
    scanf("%d", &number);

    printf("Enter the range(only positive number) : ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++)
    {
        multiplication = number * i;
        printf("%d x %d = %d\n", number, i, multiplication);
    }
}