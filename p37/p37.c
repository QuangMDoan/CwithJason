#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 150;
    int *pNum = NULL;

    pNum = &num;

    printf("num adress if: %p",&num);
    printf("Value of pNum: %p", &pNum);
    printf("value of the pNum: %p", pNum);
    printf("value of what Pnum is pointing to: %d", num);

    return 0;
}