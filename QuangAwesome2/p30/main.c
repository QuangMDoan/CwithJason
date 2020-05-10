#include <stdio.h>
#include <string.h>

int main()
{
    char myString[] = "My Name is Jason";

    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);
    printf("the string is: %s", temp);

    return 0;
}
