#include <stdio.h>

int f(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else if(n == 2)
    {
        return 2;
    }
    else
    {
        return f(n-1) + f(n-2);
    }

}

int main(void)
{
    int x;    
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("the fibonacci of %d is %d\n", x, f(x));
}