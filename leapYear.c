// Program to check year is leap year or not
#include <stdio.h>

void main()
{
    int year;

    printf("Enter year (YYYY) : ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d Year is Leap Year", year);
    else if (year % 100 == 0)
        printf("%d Year is Not Leap Year", year);
    else if (year % 4 == 0)
        printf("%d Year is Leap Year", year);
    else
        printf("%d Year is Not Leap Year", year);
}