#include <stdio.h>
#include <string.h>

// convert input string to UPPER CASE.
void convert(char* a, char* b)
{
    int i = 0;
    int j = 1;
    
    if (a[0] >= 'a' && a[0] <= 'z')
    {
        b[0] = toupper(a[0]);
    }
    else
    {
        b[0] = a[0];
    }
    
    while(a[i] && a[j])
    {
        if(a[i] == ' ' && a[j] >= 'a' && a[j] <= 'z')
        {
            b[j] = toupper(a[j]);
        }
        else
        {
            b[j] = a[j];
        }
        i++;
        j = i + 1;
    }
}

void test(char* test_str, char* expected_str)
{
    if (strcmp(test_str, expected_str) == 0)
    {
        printf("Passed. \n");
    }
    else 
    {
        printf("Failed. test_str: %s, expected_str: %s\n", test_str, expected_str);
    }
}

int main()
{
    char str1[] = "abcd", str2[] = "quang minh  doan";
    char out1[] = "    ", out2[] = "Quang Minh  Doan";
    
    convert(str1, out1);
    test(out1, "Abcd");

    convert(str2, out2);
    test(out2, "Quang Minh  Doan");

    return 0;
}