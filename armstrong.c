// Program to check number is armstrong or not.
#include <stdio.h>
#include <math.h>
#include "MyHeader.h"

void main()
{
    int number, rem, count = 0, cube, result = 0, mul = 1;

    printf("Enter number to check armstrong : ");
    scanf("%d", &number);

    int tem = number;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    number = tem;

    cube = count;
    /*while (number != 0)
    {
        rem = number % 10;
        while (cube != 0)
        {
            mul = mul * rem;
        }
        result = result + mul;
        number /= 10;
        cube = count;
        mul = 1;
    }*/

    while (number != 0)
    {
        rem = number % 10;
        cube = powerf(rem, count);
        result = result + cube;
        number /= 10;
    }

    printf("Count : %d\n", count);
    number = tem;
    printf("number : %d\n", number);
    printf("result : %d\n", result);

    if (number == result)
    {
        printf("Number is armstrong number");
    }
    else
    {
        printf("Number is not a armstorng number");
    }
}