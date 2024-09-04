#include <stdio.h>
#include <string.h>

void revers_string(char str[50]);

void main()
{
    char string[50];

    printf("Enter any thing :");
    scanf("%[^\n]s", string);
    printf("Hii %s\n", string);
    revers_string(string);
}

void revers_string(char str[50])
{
    int len = strlen(str);
    char temp;
    printf("len = %d\n", len);
    for (int i = 0; i <= len - 1; i++)
    {
        // str = Aniket = A:0 n:1 i:2 k:3 e:4 t:5
        temp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = temp;
        len--;
    }

    printf("revers_string = %s", str);
}
