#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    printf("\nThis is a guessing game");
    printf("\nI have chosen a number between 0 and 20 you must geuss it\n");
    for(int i = 5; i > 0; i--)
    {
        printf("You have %d tries left\n", i);
        int s;
        printf("Enter a guess: ");
        scanf("%d", &s);
        while(s != randomNumber)
        {
            if(s < randomNumber)
            {
                printf("My number is greater than that\n");
                break;
            }
            else if(s > randomNumber)
            {
                printf("My number is less than that\n");
                break;
            }
            else
            {
                printf("I SAID FROM 0 TO 20 DANGIT\n");
                break;
            }
        }
        if(s == randomNumber)
        {
            printf("Congratulations you guessed it\n");
            return 0;
        }
    }
}