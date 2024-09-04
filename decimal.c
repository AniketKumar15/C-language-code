// Program to convert binary number into decimal
#include <stdio.h>
#include <math.h>
#include <stdbool.h> //Contant bool data type

void main()
{
    int binaryNum, rem, result = 0, checker;
    bool isBinary = false; // boolen data type to check number is binary or not

    printf("Enter binary number :");
    scanf("%d", &binaryNum);

    checker = binaryNum;

    // Checker checks that the given number is binary or not
    // if it is binary then boolen expression become true
    while (checker > 0)
    {
        int rem = checker % 10;
        if (rem != 0 && rem != 1)
        {
            printf("Given number is not in binary\n");
            break;
        }
        checker = checker / 10;
        if (checker == 0)
        {
            printf("Given number is in binary\n");
            for (int i = 0; binaryNum != 0; i++)
            {
                rem = binaryNum % 10;
                result = result + rem * pow(2, i);
                binaryNum /= 10;
            }
            printf("Decimal number is : %d\n", result);
            // isBinary = true;
        }
    }

    // if number is binary then convert it into decimal number
    /*if (isBinary == true)
    {
        for (int i = 0; binaryNum != 0; i++)
        {
            rem = binaryNum % 10;
            result = result + rem * pow(2, i);
            binaryNum /= 10;
        }
        printf("Decimal number is : %d\n", result);
    }*/

    char executer;

    printf("Enter y to run code again : ");
    scanf(" %c", &executer);

    if (executer == 'y' || executer == 'Y')
        main();
}