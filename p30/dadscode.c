#include <stdio.h>
#include <stdlib.h>

float dot(float a[], float b[], float n)
{
    float c = 0;
    for(int i = 0; i < n; i++)
    {
        c += a[i] * b[i];
    }
    return c;
}
#define n1 3
#define n2 4
int main()
{
    float a[n1] = {1.1, 2.2, 3.3};
    float b[n1] = {1, 1, 1};
    float c = dot(a, b, n1);
    printf("the dot product = %f\n", c);

    float x[n2] = {2.1, 3.1, 4.1, 5.1};
    float y[n2] = {1, 1, 1, 1};
    c = dot( x, y, n2);
    printf("the dot product = %f\n", c);
}