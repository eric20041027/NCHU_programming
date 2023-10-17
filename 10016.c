#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, result;
    scanf("%d", &n);
    result = 0;

    if (n <= 0)
    {
        result = -100;
    }
    else
    {
        if (n % 3 == 0)
        {
            result += 3;
        }
        if (n % 5 == 0)
        {
            result += 5;
        }
        if (100 <= n && n <= 200)
        {
            result += 50;
        }
        else
        {
            result -= 50;
        }
    }

    printf("%d", result);
}