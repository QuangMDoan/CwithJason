#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int x = 9;
    int y = 6;
    printf("the gcd of %d and %d is %d", x, y, gcd(x, y));
}