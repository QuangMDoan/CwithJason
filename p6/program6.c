#include <stdio.h>

int main()
{
    int i;
    
    for(i = 1; i <= 10; i++)
    {
        if((i % 2) == 1)
        {
            printf("I am quite odd\n");
            continue;
        }
        printf("Even up!\n");
    }
    return 0;
}