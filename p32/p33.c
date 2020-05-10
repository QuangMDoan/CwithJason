#include <stdio.h>
#include <stdio.h>

int main()
{
    char myString[] = "My Name is Jason";
    char temp[50];

    strncpy(temp, myString, sizeof(temp) -1);
    printf("The length is:  %s", temp);
    return 0;
}