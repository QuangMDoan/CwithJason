#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(0)); 
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        int r = rand();
        if(r % 2 == 0)
        {
            sum += 1;
        }
    }
    printf("there are %d even numbers out of 10 random numbers\n", sum);
}