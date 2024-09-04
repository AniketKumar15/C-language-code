//Program to check positive or negative number using nested if.....
#include<stdio.h>

void main()
{
    int number;

    printf("Enter any Integer : ");
    scanf("%d", &number);

    if(number != 0)
    {
        if(number > 0)
        printf("%d is a positive numebr", number);
        else
        printf("%d is a negative number", number);
    }
    else
    {
        printf("You enter zero");
    }
}