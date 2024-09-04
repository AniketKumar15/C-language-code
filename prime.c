#include<stdio.h>

void main()
{
    int number, count=0;
    printf("Program to check number is prime or not\n");

    printf("Enter the number to check prime or not : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (number%i == 0)
        {
            count++;
        }
        
    }

    printf("Count : %d\n", count);
    if (count == 2)
    {
        printf("%d is a prime number", number);
    }
    else
    {
        printf("%d is non a prime numebr", number);
    }
    
    
    
    
}