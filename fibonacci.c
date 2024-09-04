// Program to print fibonacci serise
#include <stdio.h>

void main()
{
    int nTerm, a = 0, b = 1, nextTerm = 0;

    printf("Enter n term : ");
    scanf("%d", &nTerm);

    printf("Fibonacci series : %d %d", a, b);

    for (int i = 0; i < nTerm - 2; i++)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        printf(" %d", nextTerm);
    }
}