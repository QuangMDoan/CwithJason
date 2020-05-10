#include <stdio.h>

int main()
{
    srand(time(0));
    int max = 0;
    for(int i = 0; i < 10; i++)
    {
        int randomnumber = rand();
        printf("%d,", randomnumber);
        if(randomnumber > max)
        {
            max = randomnumber; 
        }
    }
    printf("\nThe max number out of 10 numbers is %d\n", max);
}
                                                                                                                                                    