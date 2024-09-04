// Program to check vowel or consonant
#include <stdio.h>

void main()
{
    char v;

    printf("Enter an alphabet : ");
    scanf("%c", &v);

    // Evaluates to 1 if variable is vowel otherwise it evaluates 0
    int vowel = (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' || v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U');

    // if evaluate 1 then it true and the given char is vowel other wise it consonant
    (vowel) ? printf("%c is a Vowel", v) : printf("%c is a Consonant", v);
}