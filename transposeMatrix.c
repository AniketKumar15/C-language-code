// Program to transpose of matrix
#include <stdio.h>

// Global variables
int matrix[100][100], transpose[100][100];

// Function Prototype
void matrix_input(int row, int col);
void transpose_Matrix(int row, int col);

void main()
{
    printf("\nProgram to transpose of matrix \n");

    int row, col;

    printf("Enter No. of rows : ");
    scanf("%d", &row);

    printf("Enter no. of colume : ");
    scanf("%d", &col);

    matrix_input(row, col);
    transpose_Matrix(row, col);

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
    printf("\nEnter Matrix Elements :\n");

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nYour First Matrix Elements is :\n");

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose_Matrix(int row, int col)
{
    printf("\nTranspose of Matrix : \n");
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            transpose[i][j] = matrix[j][i];
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
