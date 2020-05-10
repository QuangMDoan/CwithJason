#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" a char occupys this amount of space is %zu\n", sizeof(char));
    printf(" a int occupys this amount of space is %zu\n", sizeof(int));
    printf(" a long occupys this amount of space is %zu\n", sizeof(long));
    printf(" a long long occupys this amount of space is %zu\n", sizeof(long long));
    printf(" a float occupys this amount of space is %zu\n", sizeof(float));
    printf(" a short occupys this amount of space is %zu\n", sizeof(short));
    printf(" a double occupys this amount of space is %zu\n", sizeof(double));
    printf(" a long double occupys this amount of space is %zu\n", sizeof(long double));

    return 0;
}