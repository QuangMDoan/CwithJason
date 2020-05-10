#include <stdio.h>

printf_spaces(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

int main()
{
    for(int j = 0; j <= 4; j++)
    {
        int n = 4-j;
        printf_spaces(n);
        for(int i = 0; i < j*2-1; i++)
        {
            printf("*");
        }
        printf_spaces(n);
        printf("\n");
    }
    for(int j = 4; j >0; j--)
    {
        int n = 4-j;
        printf_spaces(n);
        for(int i = 0; i <= j*2-1; i++)
        {
            printf("*");
        }
        printf_spaces(n);
        printf("\n");
    }
}