#include <stdio.h>

int main()
{
    int a[3][3];
    for(int i = 0; i < 3;  i++)
    {
        for(int j = 0; j < 3; j++)
        {
            a[i][j] = 3 * i + j + 1;
        }
    }
    int sum = 0;
    for(int i = 0; i < 3;  i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
    }
    printf("sum = %d", sum);
}