#include <stdio.h>

// Global Variable
int matrix1[100][100], matrix2[100][100], mulMatrix[100][100];

// Function Prototype
void input_matrix(int row, int col);
void print_matrix(int row, int col);
void Multiply_matrix(int row, int col);

void main()
{
    int row, col;
    printf("Enter no. of rows : ");
    scanf("%d", &row);
    printf("Enter no. of colume : ");
    scanf("%d", &col);

    input_matrix(row, col);
    print_matrix(row, col);
    Multiply_matrix(row, col);
}

void input_matrix(int row, int col)
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

void print_matrix(int row, int col)
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

void Multiply_matrix(int row, int col)
{
    printf("Multiply of matrix :\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            mulMatrix[i][j] = 0;
            for (int k = 1; k <= col; k++)
            {
                mulMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ", mulMatrix[i][j]);
        }
        printf("\n");
    }
}