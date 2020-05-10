#include <stdio.h>

int main()
{
    int a[3];
    int b[3];
    int c = 0;
    for(int i = 0; i < 3; i++)
    {
        b[i] = i+2;
        a[i] = i+1;
        c += a[i]*b[i];
    }
    printf("the sum of the dot product of a and b is = %d\n", c);
}