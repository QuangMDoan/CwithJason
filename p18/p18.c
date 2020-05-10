#include <stdio.h>
#include <stdlib.h>
int main()
{
    float area = 0;
    float perimeter = 0;

    float length;
    float height;

    printf("Enter a number: ");
    scanf("%f", &length);
    
    printf("Enter a number: ");
    scanf("%f", &height);

    perimeter = (length + height) * 2;
    area = length * height;

    printf("The perimeter of the two numbers = %f", perimeter);
    printf("The area of the two numbers = %f", area);

    return 0;
}