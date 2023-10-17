#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool depend = true;
    int n;
    scanf("%d", &n);
    if (n <= 0)
    {
        depend = false;
    }
    if (n % 2 != 0)
    {
        depend = false;
    }
    if (n >= 1000 && n <= 10000)
    {
        depend = false;
    }
    if (depend == true)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}