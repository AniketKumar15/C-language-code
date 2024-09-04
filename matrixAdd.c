// Program to add two matrix
#include <stdio.h>

// Global variables
int matrix1[100][100], matrix2[100][100];

// Function Prototype
void matrix_input(int row, int col);
void matrix_Print(int row, int col);
void Matrix_Add(int row, int col);

void main()
{
    int row, col;

    printf("Enter No. of rows : ");
    scanf("%d", &row);

    printf("Enter no. of column : ");
    scanf("%d", &col);

    matrix_input(row, col);
    matrix_Print(row, col);
    Matrix_Add(row, col);

    // execute the whole code again
    // Enter 1 to execute code again

    int executer;
    printf("Enter 1 to run code again : ");
    scanf("%d", &executer);

    if (executer == 1)
    {
        main();
    }
}

void matrix_input(int row, int col)
{
    printf("Enter First Matrix Elements :\n");

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("Matrix[%d][%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter Second Matrix Element :\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("Matrix[%d][%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
}

void matrix_Print(int row, int col)
{
    printf("Your First Matrix Elements is :\n");

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("your Second Matrix Element is :\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
}

void Matrix_Add(int row, int col)
{
    printf("Addtion of matrix is :\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
}