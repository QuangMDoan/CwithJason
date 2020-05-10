#include <stdio.h>


int main()
{
    _Bool a = 1;
    _Bool b = 0;
    _Bool result;

    result = a || b;

    printf("%d", result);

    return 0;
}
