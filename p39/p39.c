#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y)
{
    int temp;
    while(y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int main()
{
    int a = 9;
    int b = 6;
    printf("The greatest common divisor between %d and %d is equal to %d", a, b, gcd(a, b));
}