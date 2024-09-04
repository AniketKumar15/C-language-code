// Program to make a simple calculator using switch statement
#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{

    double num1, num2;
    char op;
    int executer;
    printf("\tHello I am a calucalter\n");

    printf("Enter First Number : ");
    scanf("%lf", &num1);

    printf("Enter Second Number : ");
    scanf("%lf", &num2);

    printf("Enter Operator (+ - * / %% p) : ");
    scanf(" %c", &op);

    // Switch Statement for calculator
    switch (op)
    {
    case '+':
        printf("%.3lf + %.3lf = %.3lf", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.3lf - %.3lf = %.3lf", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.3lf * %.3lf = %.3lf", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.3lf / %.3lf = %.3lf", num1, num2, num1 / num2);
        break;
    case '%':
        printf("%.3lf %% %.3lf = %.3d", num1, num2, (int)num1 % (int)num2);
        break;
    case 'p':
        printf("%.3lf ka power %.3lf = %.3lf", num1, num2, pow(num1, num2));
        break;
    default:
        printf("You enter wrong Operator");
        break;
    }

    printf("\nEnter 1 to execute code again and 0 to terminate the code : ");
    scanf("%d", &executer);

    if (executer == 1)
    {
        printf("\nThank you for using \n\n");
        main();
    }

    getch();
}