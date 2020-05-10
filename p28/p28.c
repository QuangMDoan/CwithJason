#include <stdio.h>

int main()
{
    int a[3][3];
    for(int i = 0; i < 9; i++)
    {
        int row = i / 3;
        int col = i % 3;
        a[row][col] = i+1;
        if(col == 0)
        {
            printf("\n");
        }
    }
    int sum = 0;
    for(int i = 0; i < 9; i++)
    {
        int row = i /3;
        int col = i % 3;
        sum += a[row][col]; 
    }
    printf("\n sum = %d\n", sum);
}