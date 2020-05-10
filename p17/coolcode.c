#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x1[20];
    char x2[20];

    printf("Enter an number: ");
    scanf("%s", x1);

    printf("Enter an number: ");
    scanf("%s", x2);

    float i1 = atof(x1);
    float i2 = atof(x2);

    printf("%s + %s = %.2f", x1, x2, i1+i2);
}