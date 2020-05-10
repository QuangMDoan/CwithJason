#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i = 0; i <= 10; i++)
    {
        if(i % 2 == 0)
        {
            sum += i * 3;
        }
    }
    printf("The sum of even numbers from 0 to 10 TIMES 3 is %d\n", sum);
}