// Program to check given input is alphabet or not.
#include <stdio.h>

void main()
{
    char alphabet;

    printf("Enter a character : ");
    scanf("%c", &alphabet);

    if (alphabet >= 'a' && alphabet <= 'z' || alphabet >= 'A' && alphabet <= 'Z')
    {
        printf("%c is a alphabet", alphabet);
    }
    else
    {
        printf("%c is not an alphabet", alphabet);
    }
}