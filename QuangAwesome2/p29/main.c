#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[] = "to be or not to be";
    char str2[] = ",that is the question";
    unsigned int count = 0;

    while(str1[count]!='\0')
    {
        ++count;
    }

    printf("The length of the string\"%s is %d characters.\n", str1, count);

    count = 0;
    while(str2[count]!='\0')
    {
        ++count;
    }

    printf("The length of the string\"%s\" is %d characters.\n", str2, count);
    return 0;
}
