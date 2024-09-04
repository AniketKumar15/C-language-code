// Program to print half pyramid
#include <stdio.h>
#include <conio.h>

void main()
{

  int row;
  printf("Half pyramid\n");
  printf("Enter the number of rows : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  getch();
}