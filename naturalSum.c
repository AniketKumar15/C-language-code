//Program to print sum of n natural number using for loop.
#include<stdio.h>

void main()
{
    int nTerm, sum=0;

    printf("Enter N term : ");
    scanf("%d", &nTerm);

    for(int i = 1; i <= nTerm; i++)
    {
        sum += i;
    }

    printf("Sum of %d natural number is : %d", nTerm, sum);
}