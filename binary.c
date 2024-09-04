#include <stdio.h>
#include <conio.h>
int main()
{
    int j, num;
    printf("Please enter a number :");
    scanf("%d", &num);
    while (num > 0)
    {
        j = num % 10;
        printf("J : %d\n", j);
        if (j != 0 && j != 1)
        {
            printf("Given number is not in binary");
            break;
        }
        num = num / 10;
        printf("Num : %d\n", num);
        if (num == 0)
        {
            printf("Given number is in binary");
        }
    }
    getch();
}