// Program to find factorial of n term number.
#include <stdio.h>

void main()
{
    printf("_________________________\n\nPROGRAM TO FIND FACTORIAL\n_________________________\n\n");
    int nTerm, i = 1, again;
    double fact = 1;

    printf("Enter n term : ");
    scanf("%d", &nTerm);

    /*for (int i = 1; i <= nTerm; i++)
    {
        fact *= i;
    }*/
    if (nTerm >= 0)
    {
        while (i <= nTerm)
        {
            fact *= i;
            i++;
        }
    }
    else
    {
        printf("You enter a negative number");
        goto down;
    }

    printf("Factorial of %d is %.0lf", nTerm, fact);

down:
    // Code execute again
    printf("\nEnter 1 to execute code again and to stop enter 0 : ");
    scanf("%d", &again);

    if (again == 1)
    {
        main();
    }
}