#include <stdio.h>

int main()
{
    for(int j = 9; j >= 0; j--)
    {
        printf("%d|", j);
        for(int i = 0; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}