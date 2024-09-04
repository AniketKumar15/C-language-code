#include <stdio.h>

void main()
{
    int row;
    printf("Progrma to print Full star pyramid\n");

    printf("Enter no. of rows : ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j <= row - 1; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        /*for(int l = 2; l <= i; l++)
        {
            printf("*");
        }*/

        printf("\n");
    }
}