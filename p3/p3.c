#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a value :");
    scanf("%s, %d", &i, str);
    printf("You entered %d::::%s", i, str);

    return 0;
}