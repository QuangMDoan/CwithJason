#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    for(int i = 0; i <= 20; i++)
    {
        if(i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("sum = %d\n", sum);
}
