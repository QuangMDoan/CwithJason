#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i aSize;

    int * randomNums;

    time_t t;

    double total = 0;
    int biggest, smallest;
    float average;

    srand(time(&t))

    printf("How many random numbers do you want in your array?");
    scanf("%d", &aSize)

    randomNums = (int *)malloc(aSize * sizeof(int));

    if(!randomNums)
    {
        printf("Random array allocation fialed!\n");
        exit(1);
    }

    for(i = 0; i < aSize; i++)
    {
        random Nums[i] = (rand()% 500) + 1;
    }
    
    biggest = 0;
    smallest = 500;

    for(i = 0; i < aSize; i++)
    {
        total += randomNums[i]
        if(randomNums[i] >  biggest)
        {
            biggest = randomNums[i];
        }
        if(randomNums[i] < smallest)
        {
            smallest = randomNums[i];
        }
    }
}