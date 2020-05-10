#include <stdio.h>
#include <assert.h>
int main()
{
    int x1 = 12;
    int x2 = 8;

    int x3 = x1 & x2;
    assert(x3 == 8);

    x3 = x1 | x2;
    assert(x3 == 12);

    x3 = x1 >> 1;
    assert(x3 == 6);

    x3 = x2 << 1;
    assert(x3 == 16);
}