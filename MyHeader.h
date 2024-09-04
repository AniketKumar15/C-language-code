// Function prototypes
int powerf(int base, int exponent);

int powerf(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return exponent > 0 ? result : 1 / result;
}
