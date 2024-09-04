// Program to make a simple calculator using switch statement
#include <stdio.h>
#include <math.h>

void main()
{
    printf("\tHello I am a calucalter\n");

    double num[100];
    int size;
    char op;

    printf("Enter First Number : ");
    scanf("%d", &size);

    printf("Enter Operator (+ - * / %% p) : ");
    scanf(" %c", &op);

    int executer;

    printf("\nEnter 1 to execute code again and 0 to terminate the code : ");
    scanf("%d", &executer);

    if (executer == 1)
    {
        printf("\nThank you for using \n\n");
        main();
    }
}