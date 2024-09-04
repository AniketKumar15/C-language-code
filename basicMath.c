// program to perfome basic math calculation like add, subtraction, multiplication, divison, modulus.
#include <stdio.h>

int add(int a, int b)
{
    int result = a + b;
    return result;
}

int subtraction(int a, int b)
{
    int result = a - b;
    return result;
}

int mltiplication(int a, int b)
{
    int result = a * b;
    return result;
}

float division(float a, float b)
{
    float result = a / b;
    return result;
}

int modulus(int a, int b)
{
    int result = a % b;
    return result;
}

void main()
{
    int number1, number2;

    printf("Enter First number : ");
    scanf("%d", &number1);
    printf("Enter second number :");
    scanf("%d", &number2);

    printf("Add : %d\n", add(number1, number2));
    printf("Subtraction : %d\n", subtraction(number1, number2));
    printf("Mltiplication : %d\n", mltiplication(number1, number2));
    printf("Division : %.2f\n", division(number1, number2));
    printf("Modulus : %d\n", modulus(number1, number2));
}